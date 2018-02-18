#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
    int N;cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)cin>>v[i];
    set<int> s;
    s.insert(v[0]);
    int ans = 0;
    for(int i=1;i<N;i++){
        s.insert(v[i]);
        ans+=distance(s.find(v[i]),s.end())-1;
    }
    cout<<ans<<endl;
    }
}