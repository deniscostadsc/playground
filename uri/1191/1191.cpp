#include <cstdlib>
#include <iostream>

using namespace std;

struct node {
    char value;
    node *left;
    node *right;
};

node* build_tree_from_preorder_inorder(string pre, string in) {
    int in_root_index = in.find(pre[0]);

    node *root = (node *) malloc(sizeof(node));
    root->value = pre[0];

    if (in.substr(0, in_root_index).length() > 0) {
        root->left = build_tree_from_preorder_inorder(
            pre.substr(1),
            in.substr(0, in_root_index));
    }
    if (in.substr(in_root_index + 1).length() > 0) {
        root->right = build_tree_from_preorder_inorder(
            pre.substr(in_root_index + 1),
            in.substr(in_root_index + 1));
    }

    return root;
}

void postorder_print(node *tree) {
    if (tree->left != NULL) postorder_print(tree->left);
    if (tree->right != NULL) postorder_print(tree->right);
    cout << tree->value;
    free(tree);
}

int main() {
    string pre, in;

    while (cin >> pre >> in) {
        node *tree = build_tree_from_preorder_inorder(pre, in);
        postorder_print(tree);
        cout << endl;
    }
    
    return 0;
}
