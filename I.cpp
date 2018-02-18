#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int H,N;
        cin>>H>>N;
        while(N--){
            ll tmp;cin>>tmp;
            if(tmp+1==(1<<H)){
                cout<<"-1 ";
                continue;
            }
            int ans = 0;
            int root;
            while(true){
            if((tmp+1)==((tmp+1)&-(tmp+1))    || (2*tmp+1) == ((2*tmp+1)&-(2*tmp+1)))break;
            for(root = 1;root<=tmp;root<<=1);
            root>>=1;root--;
            tmp-=root;
            if(tmp==root)break;
            ans += root;
            }
            if(tmp%2)ans+=2*tmp+1;
                else ans+=tmp+1;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}
