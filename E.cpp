#include<bits/stdc++.h>
#define x first
#define y second
#define pii pair<int,int>
using namespace std;

int check(vector<pii> v){

    if(v[1].y> max(v[0].y,v[2].y) && (v[0].x < v[1].x)  && (v[1].x< v[2].x))return 1;
    if(v[1].y< min(v[0].y,v[2].y) && (v[0].x < v[1].x)  && (v[1].x< v[2].x))return 0;
    return -666;
}
int main(){
    int tc;cin>>tc;
    while(tc--){
       int N;cin>>N;
       vector<pair<int,int>>tr(3);
       for(int i=0;i<3;i++)cin>>tr[i].x>>tr[i].y;
       int mask = 1;
       bool ok = (check(tr)==mask);
       for(int i=3;i<N;i++){
        tr[0]=tr[1];
        tr[1]=tr[2];
        cin>>tr[2].x>>tr[2].y;
        mask^=1;
        ok &= (check(tr)==mask);
       }
       cout<<(ok ? "":"Not ")<<"Mountains and Valleys\n";
    }
}
