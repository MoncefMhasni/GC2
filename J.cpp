#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> w,parent;
int n,m;
vector<vector<int>> v;
int solve(){

    stack<int> S;
    vector<int> dist(n,0);
    for(int i=0;i<n;i++)
        if(parent[i]==0){
                S.push(i);
                dist[i]=w[i];
        }
    while(!S.empty()){
        int s = S.top();S.pop();
        for(auto i:v[s]){
            dist[i]=max(dist[i],dist[s]+w[i]);
            parent[i]--;
            if(parent[i]==0)S.push(i);
        }
    }
    return *max_element(dist.begin(),dist.end());
}
int main(){
    int tc;cin>>tc;
    while(tc--){
    cin>>m>>n;
    v.clear();
    v.resize(n);parent.resize(n,0);
    while(m--){
        int a,b;cin>>a>>b;
        v[b].pb(a);
        parent[a]++;
    }
    w.resize(n);
    for(int i=0;i<n;i++)cin>>w[i];
    int ans = solve();
    cout<<ans<<endl;

    }
}