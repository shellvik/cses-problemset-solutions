#include <bits/stdc++.h>
using namespace std;

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
typedef long long ll;
#define endl "\n"

int main() {
  fastread();

  ll n; cin>>n;
  vector<ll>v(n); 
  for(auto &it: v){
    cin>> it;
  }
  ll cnt =0;
  for(ll i =1; i<n; i++){
    if(v[i-1]>v[i]) {
      cnt += v[i-1] - v[i];
      v[i] = v[i-1];
    }
  }
  cout<< cnt << endl;


  return 0;
}
