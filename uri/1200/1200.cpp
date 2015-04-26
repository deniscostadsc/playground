#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct node {
    char letter;
    node *left;
    node *right;
};

void insert_node(node *tree, node *new_node) {
    if (tree == NULL) {
        puts("nulo");
        tree = new_node;
        puts("depois do nulo");
        printf("+%c+", tree->letter);
    } else if (new_node->letter > tree->letter) {
        insert_node(tree->right, new_node);
    } else {
        insert_node(tree->left, new_node);
    }
    puts("saida nulo");
}

bool exist(node *tree, char letter) {
    bool result = false;

    if (tree->letter == letter) return true;
    if (tree->right != NULL) result = exist(tree->right, letter);
    if (tree->left != NULL) result = result || exist(tree->left, letter);

    return result;
}

void prefixa(node *tree) {
    printf("%c ", tree->letter);
    if (tree->right != NULL) prefixa(tree->right);
    if (tree->left != NULL) prefixa(tree->left);
}

void infixa(node *tree) {
    if (tree->right != NULL) infixa(tree->right);
    printf("%c ", tree->letter);
    if (tree->left != NULL) infixa(tree->left);
}

void posfixa(node *tree) {
    if (tree->right != NULL) posfixa(tree->right);
    if (tree->left != NULL) posfixa(tree->left);
    printf("+++%c+++", tree->letter);
}

int main() {
    char letter;
    string command;

    node *tree = (node *)malloc(sizeof(node));
    //node *tree = NULL; //(node *)malloc(sizeof(node));

    while (cin >> command) {
        if (command == "I") {
            cin >> letter;
            cout << endl << endl << "& " << letter << " &" <<endl<<endl;

            node *new_node = (node *)malloc(sizeof(node));
            new_node->letter = letter;
            new_node->left = NULL;
            new_node->right = NULL;

            puts("antes da funcao");
            insert_node(tree, new_node);
            puts("depois da funcao");
            cout << endl << endl << "&-- " << tree->letter << " --&" <<endl<<endl;
            if (tree == NULL) puts("fudeu");
            printf("==== %c ====", tree->letter);
        } else if (command == "P") {
            cin >> letter;

            if (exist(tree, letter)) printf("%c existe\n", letter);
            else printf("%c nao existe\n", letter);
        } else if (command == "PREFIXA") {
            prefixa(tree);
        } else if (command == "INFIXA") {
            infixa(tree);
        } else {
            posfixa(tree);
        }
    }

    return 0;
}
