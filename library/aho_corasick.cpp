struct AhoCorasick{
    const static int C = 26;
    struct Node{
        int suffix_link = -1, exit_link = -1, cnt = 0, nxt[C];
        Node(){ memset(nxt, -1, sizeof(nxt)); }
    }; 

    vector<Node> node = {Node()};

    void insert_string(string &s){
        int p = 0;
        for(int i = 0; i < sz(s); ++i){
            if(node[p].nxt[s[i] - 'a'] == -1){
                node[p].nxt[s[i] - 'a'] = sz(node);
                node.push_back(Node());
            }
            p = node[p].nxt[s[i] - 'a'];
        }
        ++node[p].cnt;
    }

    void build_automaton(){
        for(deque<int> q = {0}; !q.empty(); q.pop_front()){
            int v = q.front(), suffix_link = node[v].suffix_link;
            if(v)
                node[v].exit_link = (node[suffix_link].cnt ? suffix_link : node[suffix_link].exit_link);
            for(int c = 0; c < C; ++c){
                int &nxt = node[v].nxt[c], nxt_sf = v ? node[suffix_link].nxt[c] : 0;
                if(nxt == -1)
                    nxt = nxt_sf;
                else{
                    node[nxt].suffix_link = nxt_sf;
                    q.push_back(nxt);
                }
            }
        }
    }

    // vector<int> get_sindex(int p){
    //     vector<int> a;
    //     for(int v = (node[p].cnt ? p : node[p].exit_link); v != -1; v = node[v].exit_link)
    //         for(int j : node[v].leaf)
    //             a.push_back(j);
    //     return a;
    // }
};