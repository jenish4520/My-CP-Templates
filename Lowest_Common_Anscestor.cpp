class TreeAncestors{
public:
    vector<vector<ll>> ancestors;
    vector<ll> depth;
    ll total_bits_in_n;

    // We need to have 
    // number of nodes
    // 1st parent of every node
    // depth of every node
    // root
    // And you are done
    TreeAncestors(ll n, vector<ll>& parent, vector<ll>& dpth, ll root){
        //Assigning Depth vector
        depth=dpth;

        //Counting total bits in n
        total_bits_in_n = 0;
        while((1<<(total_bits_in_n))<=n){
            total_bits_in_n++;
        }

        ancestors.resize(n+1, vector<ll>(total_bits_in_n));

        // Making parent 0 of root node
        parent[root]=0;
        // Counting 2^0th = 1st parent according to parent array
        for(int i=1;i<=n;i++){
            ancestors[i][0] = parent[i];
        }

        //Now for every value of n we are finding their 1st then
        // 2nd then 3rd ... ancestors
        // This helps when parent[i]<i is not satisfied
        for(int j=1; j<=total_bits_in_n; j++){
            for(int i=1;i<=n;i++){
                ancestors[i][j] = ancestors[ancestors[i][j-1]][j-1];
            }
        }
    }

    ll getKthAncestor(ll node, ll k){
        // If no parent exist than return -1
        if(depth[node]<k) return -1;

        // If in k if x-th bit is set we move up to 2^x-th parent
        for(int j=0; j<total_bits_in_n; j++){
            if(k & (1<<j)){
                node = ancestors[node][j];
            }
        }
        return node;
    }

    ll getLowestCommonAncestor(ll a, ll b){
        if(depth[a]<depth[b]) swap(a, b);

        // Binary Lifting
        // We make both a and b at same level
        ll depth_difference = depth[a]-depth[b];
        for(int i=total_bits_in_n-1; i>=0; i--){
            if((depth_difference & (1<<i))){
                a = ancestors[a][i];
            }
        }
        if(a==b) return a;

        // If 2^i-th ancestor of both are not same we move both
        // of them to their respective 2^i-th ancestor and again
        // check for new value of 2^i.
        for(int i=total_bits_in_n-1; i>=0; i--){
            if(ancestors[a][i] != ancestors[b][i]){
                a = ancestors[a][i];
                b = ancestors[b][i];
            }
        }
        return ancestors[a][0];
    }
};
