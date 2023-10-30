#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
using namespace std;
typedef long long ll;
 
void solve(){
  read(n);
  int mod=1e9+7;
  ll res=1;
  for(int i=1;i<=n;i++)res=res*2,res=res%mod;;
  cout<<res<<endl;
  return; 
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   while(t--)solve();
   return 0;
}
