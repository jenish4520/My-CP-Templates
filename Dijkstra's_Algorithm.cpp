class DijkstraAlgorithm{
public:
    vector<ll> distance;
    vector<bool> visited;
    set<pair<ll, ll>> st;

    vector<ll> Dijkstra(vector<vector<pair<ll, ll>>>& graph, ll source, ll n){
        distance.resize(n+1, 1e9+10);
        visited.resize(n+1, false);

        distance[0]=0;
        distance[source]=0;
        st.insert({0, source});

        while(st.size()>0){
            auto edge = *st.begin();
            st.erase(st.begin());

            ll weight, destination;
            weight=edge.first;
            destination=edge.second;

            if(visited[destination] == true) continue;
            visited[destination]=true;

            for(auto child: graph[destination]){
                ll child_destination=child.first;
                ll child_weight=child.second;

                if(weight + child_weight < distance[child_destination]){
                    distance[child_destination] = weight + child_weight;
                    st.insert({distance[child_destination], child_destination});
                }
            }
        }
        return distance;
    }
};