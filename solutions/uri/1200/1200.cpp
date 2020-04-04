#include <cstdlib>
#include <iostream>
#include <string>

bool first_in_char;
bool first_pos_char;

struct node {
    char letter;
    node *left;
    node *right;
};

void
    insert_node(node *tree, node *new_node) {
    if (tree->letter > new_node->letter) {
        if (tree->right == NULL) {
            tree->right = new_node;
        } else {
            insert_node(tree->right, new_node);
        }
    } else {
        if (tree->left == NULL) {
            tree->left = new_node;
        } else {
            insert_node(tree->left, new_node);
        }
    }
}

bool
    exist(node *tree, char letter) {
    bool result = false;

    if (tree->letter == letter)
        return true;
    if (tree->right != NULL)
        result = exist(tree->right, letter);
    if (tree->left != NULL)
        result = result || exist(tree->left, letter);

    return result;
}

void
    prefixa(node *tree) {
    std::cout << tree->letter;

    if (tree->right != NULL) {
        std::cout << " ";
        prefixa(tree->right);
    }

    if (tree->left != NULL) {
        std::cout << " ";
        prefixa(tree->left);
    }
}

void
    infixa(node *tree) {
    if (tree->right != NULL)
        infixa(tree->right);

    if (!first_in_char)
        std::cout << " ";
    std::cout << tree->letter;
    first_in_char = false;

    if (tree->left != NULL)
        infixa(tree->left);
}

void
    posfixa(node *tree) {
    if (tree->right != NULL)
        posfixa(tree->right);
    if (tree->left != NULL)
        posfixa(tree->left);

    if (!first_pos_char)
        std::cout << " ";
    std::cout << tree->letter;
    first_pos_char = false;
}

int
    main() {
    char letter;
    std::string command;

    node *tree = new node;
    tree->letter = '-';

    while (std::cin >> command) {
        if (command == "I") {
            std::cin >> letter;

            if (tree->letter == '-') {
                tree->letter = letter;
                continue;
            }

            node *new_node = new node;
            new_node->letter = letter;

            insert_node(tree, new_node);
        } else if (command == "P") {
            std::cin >> letter;

            if (exist(tree, letter)) {
                std::cout << letter << " existe" << std::endl;
            } else {
                std::cout << letter << " nao existe" << std::endl;
            }
        } else if (command == "PREFIXA") {
            prefixa(tree);
            std::cout << std::endl;
        } else if (command == "INFIXA") {
            first_in_char = true;
            infixa(tree);
            std::cout << std::endl;
        } else {
            first_pos_char = true;
            posfixa(tree);
            std::cout << std::endl;
        }
    }

    return 0;
}
