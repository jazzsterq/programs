int n; 
        cin >> n;


        vector<vector<int>> adj(n+1);
        vector<int> deg(n+1, 0);

        for(int i=0; i <n-1; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }


        vector<pair<int,int>> bd;
        bd.reserve(n);
        for(int v = 1; v <= n; v++){
            bd.push_back({deg[v], v});
        }
        sort(bd.begin(), bd.end(), 
             [](auto &a, auto &b){ return a.first > b.first; });

        int limit = min(n, K);
        vector<int> cand; 
        cand.reserve(limit);
        for(int i = 0; i < limit; i++){
            cand.push_back(bd[i].second);
        }
        unordered_set<int> ass[limit];
        for(int i = 0; i < (int)cand.size(); i++){
            int v = cand[i];

            for(int nbr : adj[v]) {
                ass[i].insert(nbr);
            }
        }


        long long bc = 0; 
        int sz = (int)cand.size();
        for(int i = 0; i < sz; i++){
            int v1 = cand[i];
            for(int j = i+1; j < sz; j++){
                int v2 = cand[j];

                bool isAdjacent = (ass[i].count(v2) > 0);
                long long curr = (long long)deg[v1] + deg[v2] - (isAdjacent ? 1 : 0);
                bc = max(bc, curr);
            }
        }

        long long ans = bc - 1;

        cout << ans << "\n";