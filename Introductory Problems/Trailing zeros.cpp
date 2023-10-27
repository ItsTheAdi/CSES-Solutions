#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
#define nn(k) cout<<k<<endl;
using namespace std;
typedef long long ll;


void solve(){

    read(n);
    int ans=0;
    while(n>=5){
      ans+=n/5;
      n/=5;
    }
    cout<<ans<<endl;
    return;
}
int main(){
  ll t=1;
 // cin>>t;
  while(t--){
    solve();
  }
    return 0;
}