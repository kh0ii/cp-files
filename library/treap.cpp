struct Treap{
    ll val;
    int prior;
    ll size, sum, total;
    Treap *left, *right;

    Treap(ll val) : val(val), prior(rng()), size(1), sum(val), total(0), left(NULL), right(NULL) {};
};

void refine(Treap *t){
    if(t == NULL) return;

    t->size = 1;
    t->sum = t->val;
    t->total = 0;

    if(t->left != NULL){
        t->size += t->left->size;
        t->sum += t->left->sum;
        t->total += t->left->total + t->val * t->left->size - t->left->sum;
    }

    if(t->right != NULL){
        t->size += t->right->size;
        t->sum += t->right->sum;
        t->total += t->right->total + t->right->sum - t->val * t->right->size;
    }

    if(t->left != NULL and t->right != NULL)
        t->total += t->right->sum * t->left->size - t->left->sum * t->right->size;
}

void split(Treap *t, Treap *&left, Treap *&right, ll val){
    if(t == NULL)
        return void(left = right = NULL);
    if(t->val <= val){
        split(t->right, t->right, right, val);
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

void insert(Treap *&t, ll val){
    Treap *lv, *rv;
    split(t, lv, rv, val);
    merge(t, lv, new Treap(val));
    merge(t, t, rv);
}

void erase(Treap *&t, ll val){
    Treap *lv, *mid, *rv;
    split(t, lv, rv, val - 1);
    split(rv, mid, rv, val);
    merge(t, lv, rv);
}

array<Treap*, 3> split(Treap *root, ll l, ll r){
    array<Treap*, 3> t;

    split(root, t[0], t[1], l - 1);
    split(t[1], t[1], t[2], r);

    return t;
}