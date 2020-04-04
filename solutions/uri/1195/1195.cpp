#include <cstdlib>
#include <iostream>

struct node {
    int value;
    node *left_node;
    node *right_node;
};

void
    insert_node(node *tree, node *new_node) {
    if (new_node->value > tree->value) {
        if (tree->right_node == NULL) {
            tree->right_node = new_node;
        } else {
            insert_node(tree->right_node, new_node);
        }
    } else {
        if (tree->left_node == NULL) {
            tree->left_node = new_node;
        } else {
            insert_node(tree->left_node, new_node);
        }
    }
}

void
    pre_print_node(node *tree) {
    std::cout << " " << tree->value;
    if (tree->left_node != NULL)
        pre_print_node(tree->left_node);
    if (tree->right_node != NULL)
        pre_print_node(tree->right_node);
}

void
    in_print_node(node *tree) {
    if (tree->left_node != NULL)
        in_print_node(tree->left_node);
    std::cout << " " << tree->value;
    if (tree->right_node != NULL)
        in_print_node(tree->right_node);
}

void
    post_print_node(node *tree) {
    if (tree->left_node != NULL)
        post_print_node(tree->left_node);
    if (tree->right_node != NULL)
        post_print_node(tree->right_node);
    std::cout << " " << tree->value;
}

int
    main() {
    int c, n, i, value, nn = 0;

    std::cin >> n;

    while (++nn <= n) {
        std::cin >> c;
        std::cin >> value;

        node *tree = new node;
        tree->value = value;

        for (i = 0; i < c - 1; i++) {
            std::cin >> value;

            node *new_node = new node;
            new_node->value = value;

            insert_node(tree, new_node);
        }

        std::cout << "Case " << nn << ":" << std::endl;
        std::cout << "Pre.:";
        pre_print_node(tree);
        std::cout << std::endl << "In..:";
        in_print_node(tree);
        std::cout << std::endl << "Post:";
        post_print_node(tree);
        std::cout << std::endl << std::endl;
    }

    return 0;
}
