#include<bits/stdc++.h>
#define x first
#define y second
#define pii pair<int,int>
using namespace std;

int check(vector<pii> v){
    double s = v[0].x*v[1].y + v[1].x*v[2].y + v[2].x*v[0].y - v[0].y*v[1].x - v[1].y*v[2].x - v[2].y *v[0].x;
    if(fabs(s)<1e-6)return -666;
    if(s>0)return 1;
    return 1;
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
        mask^=1;
        cin>>tr[i].x>>tr[i].y;
        ok &= (check(tr)==mask);
        cerr<<ok<<endl;
       }
       cout<<(ok ? "":"Not ")<<"Mountains and Valleys\n";
    }
}