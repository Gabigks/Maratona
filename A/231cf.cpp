#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, c, n, cont = 0;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> a >> b >> c;
    if((a + b + c) >= 2) cont++;
  }

  cout << cont << "\n";

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//08:11 1
