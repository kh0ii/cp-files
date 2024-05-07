// Implicit Treap
// Tested: https://oj.vnoi.info/problem/sqrt_b

struct Treap{
    ll val;
    int prior, size;
    
    ll sum;

    Treap *left, *right;

    Treap(ll val) : val(val), prior(rng()), size(1), sum(val), left(NULL), right(NULL) {};
};

int size(Treap *t){ return t == NULL ? 0 : t->size; }

void down(Treap *t){
    // do lazy propagation here
}

void refine(Treap *t){
    if(t == NULL) return;

    t->size = 1;
    t->sum = t->val;
    if(t->left != NULL){
        t->size += t->left->size;
        t->sum += t->left->sum;
    }
    if(t->right != NULL){
        t->size += t->right->size;
        t->sum += t->right->sum;
    }
}

void split(Treap *t, Treap *&left, Treap *&right, int val){
    if(t == NULL)
        return void(left = right = NULL);
    down(t);
    if(size(t->left) < val){
        split(t->right, t->right, right, val - size(t->left) - 1);
        left = t;
    }
    else{
        split(t->left, left, t->left, val);
        right = t;
    }
    refine(t);
}

void merge(Treap *&t, Treap *left, Treap *right){
    if(left == NULL) { t = right; return; }
    if(right == NULL) { t = left; return; }

    down(left); down(right);
    if(left->prior < right->prior){
        merge(left->right, left->right, right);
        t = left;
    }
    else{
        merge(right->left, left, right->left);
        t = right;
    }
    refine(t);
}

array<Treap*, 2> split(Treap *root, int val){
    array<Treap*, 2> t;
    split(root, t[0], t[1], val);
    return t;
}

array<Treap*, 3> split(Treap *root, int l, int r){
    array<Treap*, 3> t;
    Treap *tmp;

    split(root, t[0], t[1], l - 1);
    tmp = t[1];
    split(tmp, t[1], t[2], r - l + 1);

    return t;
}

Treap *root;