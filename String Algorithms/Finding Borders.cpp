#include<bits/stdc++.h>
#define all(x) ((x).begin(),(x).end())
#define re(x) long long x; cin>>x
#define ct(x) cout<<x<<endl;
#define ctr(x) cout<<x<<endl;return
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)

ll t=1;
vector<int>pi(string s){
	int n=s.length();
	vector<int>res(s.length());
	int i=1,len=0;
	res[0]=0;
	while(i<n){
		if(s[i]==s[len]){
			len++;
			res[i]=len;
			i++;
		}
		else{
			if(len!=0)len=res[len-1];
				else{
				res[i]=0;
				i++;}
		}
	}
	return res;

}
void solve(){
	string s;
	cin>>s;

	int n=s.length();
	vector<int>res=pi(s);
	std::vector<int> v;
	int j=res.back();
	while(j>0){
		v.push_back(j);
		j=res[j-1];
	}
	sort(v.begin(), v.end());
	for(int it:res)cout<<it<<" ";
		cout<<endl;
	for(int it:v)if(it!=0)cout<<it<<" ";
	cout<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);	
   //cin>>t;
   while(t--)solve();
   return 0;
}
/*
5 9
1 1 2 3 4

8 32
4 6 9 13 35 52
*/
