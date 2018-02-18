#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    string days[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" , "Sunday"};
    while(tc--){
    int y;cin>>y;
    int d=0;
    for(int i=y;i<2017;i++) {if((i+1)%4==0)d--;d-=365;}
    for(int i=2018;i<=y;i++){if((i)%4==0)d++;d+=365;}
    d = ((d+2)%7+7)%7;
    cout<<days[d]<<endl;
    }
}