#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define read(x) long long x; cin>>x
using namespace std;
typedef long long ll;
 

int main(){
  read(n);
  cout<<n<<" ";
  while(n!=1){
    if(n%2)n=(n*3)+1;
    else n/=2;
    cout<<n<<" ";
  }
    return 0;
}
