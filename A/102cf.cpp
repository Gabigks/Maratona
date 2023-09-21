#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  string a, b;

  cin >> a;
  cin >> b;

  for(int i=0; i<a.length(); i++){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }

  if(a < b)cout << -1;
  else if(a > b) cout << 1;
  else cout << 0;

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//08:11 1
