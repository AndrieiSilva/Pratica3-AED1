struct TreeNode* novoNo(int val) {
    struct TreeNode* no = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    no->val = val;
    no->left = NULL;
    no->right = NULL;
    return no;
}

void Ordenar(struct TreeNode* root, int* x, int* idx) {
    if (root == NULL) {
        return;
    }
    Ordenar(root->left, x, idx);
    x[(*idx)++] = root->val;
    Ordenar(root->right, x, idx);
}

struct TreeNode* Balanca(int* x, int ini, int fim) {
    if (ini > fim) {
        return NULL;
    }
    int meio = (ini + fim) / 2;
    struct TreeNode* root = novoNo(x[meio]);
    root->left = Balanca(x, ini, meio - 1);
    root->right = Balanca(x, meio + 1, fim);
    return root;
}

struct TreeNode* balanceBST(struct TreeNode* root) {
    int x[10001];
    int idx = 0;
    Ordenar(root, x, &idx);
    return Balanca(x, 0, idx - 1);
}
