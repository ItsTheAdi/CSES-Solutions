#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
using namespace std;
typedef long long ll;
 
void solve(){
  read(n);
  int k=1;
  vector<int>res;
  for(int i=1;i<=n-1;i++){
    int x;
    cin>>x;
    res.push_back(x);
  }
  sort(res.begin(),res.end());
  int z=res.size();
  for(int i=0;i<z;i++){
    if(res[i]!=k){
      cout<<k;
      cout<<endl;
      return;
    }
    k++;
  }
  cout<<n;
  cout<<endl;
 
 
}
int main(){
  int t=1;
  while(t--){
    solve();
  }
    return 0;
}
