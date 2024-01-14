struct Trie{
    struct Node{
        int child[26];
        int cnt, exist;
        Node(){
            memset(child, -1, sizeof(child));
            cnt = exist = 0;
        }
    };

    int cur;
    vector<Node> node;

    Trie() : cur(0){
        node.push_back(Node());
    };

    int new_node(){
        ++cur;
        node.push_back(Node());
        return cur;
    }

    void add(string s){
        int pos = 0;
        for(int i = 0; i < sz(s); ++i){
            int c = s[i] - 'a';
            if(node[pos].child[c] == -1)
                node[pos].child[c] = new_node();
            pos = node[pos].child[c];
            ++node[pos].cnt;
        }
        ++node[pos].exist;
    }

    void del(string s){
        if(!find_string(s))
            return;
        int pos = 0;
        for(int i = 0; i < sz(s); ++i){
            int c = s[i] - 'a';
            int tmp = node[pos].child[c];
            --node[tmp].cnt;
            if(node[tmp].cnt == 0){
                node[pos].child[c] = -1;
                return;
            }
            pos = tmp;
        }
        --node[pos].exist;
    }

    bool find_string(string s){
        int pos = 0;
        for(int i = 0; i < sz(s); ++i){
            int c = s[i] - 'a';
            if(node[pos].child[c] == -1)
                return 0;
            pos = node[pos].child[c];
        }
        return node[pos].exist;
    }
};