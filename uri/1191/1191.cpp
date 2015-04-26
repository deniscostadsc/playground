#include <cstdlib>
#include <iostream>

using namespace std;

struct node {
    char value;
    node *left;
    node *right;
};

void insert_node (node *tree, node *new_node) {
    if (new_node->value > tree->value) {
        if (tree->right == NULL) tree->right = new_node;
        else insert_node(tree->right, new_node);
    } else {
        if (tree->left == NULL) tree->left = new_node;
        else insert_node(tree->left, new_node);
    }
}

void post_order_print(node *tree) {
    if (tree->left != NULL) post_order_print(tree->left);
    if (tree->right != NULL) post_order_print(tree->right);
    cout << tree->value;
}

int main() {
    int i;
    string tree_str;

    while (cin >> tree_str) {
        node *tree = (node *) malloc(sizeof(node));
        tree->value = tree_str[0];
        tree->right = NULL;
        tree->left = NULL;

        for (i = 1; i < (int) tree_str.size(); i++) {
            node *new_node = (node *) malloc(sizeof(node));
            new_node->value = tree_str[i];
            new_node->right = NULL;
            new_node->left = NULL;
            insert_node(tree, new_node);
        }

        post_order_print(tree);
        cout << endl;
        cin >> tree_str;
    }
    
    return 0;
}
