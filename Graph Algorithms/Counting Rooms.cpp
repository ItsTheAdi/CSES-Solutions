#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
using namespace std;
typedef long long ll;
 
void dfs(int i,int j,vector<vector<char>>&res){
     if(i<0 || j<0 || i>=res.size() || j>=res[i].size() || res[i][j]=='#'){
        return;
     }
     res[i][j]='#';
     dfs(i+1,j,res);
     dfs(i,j+1,res);
     dfs(i-1,j,res);
     dfs(i,j-1,res);
}
void solve(){
  int n,m;
  cin>>n>>m;
  vector<vector<char>>res(n,vector<char>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       char x;
       cin>>x;
       res[i][j]=x;
    }
  }
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(res[i][j]=='.'){
        dfs(i,j,res);
        ans++;
    }
  }
}
  cout<<ans<<endl;

}
int main(){
  int t=1;
  while(t--){
    solve();
  }
    return 0;
}