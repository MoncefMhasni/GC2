#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;cin>>N;
    while(N--){
        int x;cin>>x;
        int cc=0;
        while(x)cc+=x&1,x>>=1;
        cout<<cc%2;
    }
}