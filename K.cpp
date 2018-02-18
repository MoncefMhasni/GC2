#include<bits/stdc++.h>
#define ll long long
const ll mod = 1000000007;
class matrix{
public:
	ll a[3][3];
    matrix operator*(matrix b){
        matrix res;
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            ll sum = 0;
            for (int k=0;k<3;k++)
                sum =((sum%mod) + ((a[i][k]%mod)*(b.a[k][j]%mod))%mod)%mod,
            res.a[i][j]=sum;
        }
        return res;

    }
    matrix() : a {{28,-175,300},{1,0,0},{0,1,0}}{}

};
matrix pow(ll n){
    if (n==1)return matrix();
    if(n%2)return matrix()*pow(n-1);
    matrix ans = pow(n/2);
    return ans*ans;
}
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        long long v[3],n;
        cin>>v[0] >>v[1] >>v[2]>>n;
        matrix M=pow(n-3);
        ll ans = 0;
        for(int i=0;i<3;i++)
            ans = (ans%mod + ((M.a[0][i]%mod)*(v[i]%mod))%mod)%mod;
        cout<<(ans<0 ? ans+mod : ans )<<endl;
    }

}