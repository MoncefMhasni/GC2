#include<bits/stdc++.h>
using namespace std;
bool valid(int n,int len){
    for(int i=0;i<len;i++)
        for(int j=i+1;j<len;j++){
            if( ((n>>i)&1) == ((n>>j)&1) ){
                int tmp = j+j-i;
                if(tmp>=len)continue;
                if(((n>>j)&1) == ((n>>tmp)&1))
                    return false;
            }
        }
        return true;

}
int main(){
    int tc;cin>>tc;
    while(tc--){
        int N;cin>>N;
        int ans =0;
        for(int i=0;i< (1<<(N));i++)
            if(valid(i,N)) ans++;
        cout<<ans<<endl;
    }
}
