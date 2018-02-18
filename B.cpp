#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
    string s;
    int n,L;cin>>n>>L;
    cin>>s;
    for(int i=0;i<L;i++){
        int c  = s[i]-'a';
        if(i%2 == 0 || i%3 ==0){
        if(s[i]=='@'){
            cout<<"#";continue;
        }
        else c+=n;
        while(c>25)c-=26;
        }
       putchar(c+'a');
    }
    cout<<endl;
    }
}