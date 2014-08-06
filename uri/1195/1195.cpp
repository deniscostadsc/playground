#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int value;
    node *left_node;
    node *right_node;
};

void insert_node(node *tree, node *new_node){
    if (new_node->value > tree->value){
        if (tree->right_node == NULL) tree->right_node = new_node;
        else insert_node(tree->right_node, new_node);
    } else {
        if (tree->left_node == NULL) tree->left_node = new_node;
        else insert_node(tree->left_node, new_node);
    }
}

void pre_print_node(node *tree){
    cout << " " << tree->value;
    if (tree->left_node != NULL) pre_print_node(tree->left_node);
    if (tree->right_node != NULL) pre_print_node(tree->right_node);
}

void in_print_node(node *tree){
    if (tree->left_node != NULL) in_print_node(tree->left_node);
    cout << " " << tree->value;
    if (tree->right_node != NULL) in_print_node(tree->right_node);
}

void post_print_node(node *tree){
    if (tree->left_node != NULL) post_print_node(tree->left_node);
    if (tree->right_node != NULL) post_print_node(tree->right_node);
    cout << " " << tree->value;
}

int main(){
    int c, n, i, value, nn = 0;

    cin >> n;

    while (++nn <= n){
        cin >> c;
        cin >> value;

        node *tree = (node *)malloc(sizeof(node));;
        tree->value = value;
        tree->left_node = NULL;
        tree->right_node = NULL;

        for (i = 0; i < c - 1; i++){
            cin >> value;

            node *new_node = (node *)malloc(sizeof(node));
            new_node->value = value;
            new_node->left_node = NULL;
            new_node->right_node = NULL;

            insert_node(tree, new_node);
        }

		cout << "Case " << nn << ":" << endl;
        cout << "Pre.:";
        pre_print_node(tree);
        cout << endl << "In..:";
        in_print_node(tree);
        cout << endl << "Post:";
        post_print_node(tree);
        cout << endl << endl;
    }

    return 0;
}
