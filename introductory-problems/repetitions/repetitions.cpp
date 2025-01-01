#include <bits/stdc++.h>
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
#define  fastread() (ios_base:: sync_with_stdio(false), cin.tie(NULL));
typedef long long ll;
#define endl "\n"

int main(){
  fastread();
  string s; cin>>s;
  int ans = 1, cnt =1;
  for(int i = 1 ; i < s.length() ; i++){
  	cnt = (s[i]==s[i-1]) ? cnt + 1 : 1;
  	ans = max(ans, cnt);
  }
  cout<< ans << endl;
return 0;
}