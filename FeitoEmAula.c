/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int ehbalanceada(struct TreeNode * root);
int FB(struct TreeNode * root);
struct TreeNode* rotacionaleft(struct TreeNode * root);
struct TreeNode* rotacionaright(struct TreeNode * root);

struct TreeNode* balanceBST(struct TreeNode* root) {
    int fb;

    if (root == NULL)
        return NULL;

    fb = ehbalanceada(root);
    
    if (fb < -1)
        root = rotacionaleft(root);
    if (fb > 1)
        root = rotacionaright(root);

    balanceBST(root->left);
    balanceBST(root->right);

    return root;
}

int ehbalanceada(struct TreeNode * root) {
    int fb;
    int fbl;
    int fbr;

    fbl = FB(root->left);
    fbr = FB(root->right);

    fb = fbl - fbr;
    return fb;
}

int FB(struct TreeNode * root) {
    int fbl = 0;
    int fbr = 0;
    int fb = 0;

    if (root == NULL)
        return 1;


        fbl = FB(root->left);
        fbr = FB(root->right);

        if (fbl > fbr) {
            fb = fbl;
        } else {
            fb = fbr;
        }

    return fb+1;
}

struct TreeNode* rotacionaleft(struct TreeNode * root) {
    struct TreeNode * x;
    struct TreeNode * r;
    x = root->right->left;
    r = root->right;

    root->right->left = root;
    root->right = x;
    return r;
}

struct TreeNode* rotacionaright(struct TreeNode * root) {
    struct TreeNode * x;
    struct TreeNode * r;
    x = root->left->right;
    r = root->left;

    root->left->right = root;
    root->left = x;
    
    return r;
}