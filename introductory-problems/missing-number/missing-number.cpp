#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define  fastread() (ios_base:: sync_with_stdio(false), cin.tie(NULL));
typedef long long ll;
#define endl "\n"

int main(){
  fastread();
  ll n; cin>>n;
  ll sum=0, total = (n*(n+1))/2;
  for(auto i =1; i<n; i++){
  	ll x; cin>> x ;
  	sum += x;
  }	 
  cout<< total - sum << endl;
return 0;
}