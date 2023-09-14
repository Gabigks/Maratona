#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;

  cin >> a >> b;

  if(a < b) a = b;

  cout << a << endl;

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test