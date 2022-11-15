const long long N = 1e5+10;
vector<long long> parent(N, 0);
vector<long long> size(N, 0);

void make(long long a){
    parent[a]=a;
    size[a]=1;
}

long long find(long long a){
    if(parent[a]==a) return a;
    return parent[a]=find(parent[a]);
}

void Union(long long a, long long b){
    a=find(a);
    b=find(b);
    if(a!=b){
        if(size[a]<size[b]) swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}