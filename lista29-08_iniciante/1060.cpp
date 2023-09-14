#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int cont = 0;
  double a;

  for(int i =0; i < 6; i++) {
    cin >> a;
    if(a > 0) cont++;
  }
  cout << cont << " valores positivos\n";

  return 0;
}

//g++ -std=c++11 -o2 -Wall index.cpp -o test