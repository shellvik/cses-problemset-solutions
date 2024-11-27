#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define  fastread() (ios_base:: sync_with_stdio(false), cin.tie(NULL));
typedef long long ll;
#define endl "\n"

int main(){
  fastread();
  ll n;
  cin>>n;
  cout<< n << " ";
  while(n>1){
  	cout<< ((n&1)? (n=(n*3)+1) : (n/=2)) << " ";
  }
return 0;
}