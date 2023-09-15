#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, y = 0;

  cin >> a >> b;

  if(a == b){
    cout << 1 << "\n";
    return 0;
  }

  while(a <= b){
    b *= 2;
    a *= 3;
    y++;
  }
  cout << y << "\n";

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//17:26 1
