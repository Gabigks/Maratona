#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, n, in = 0, out = 0;

  cin >> n;
  
  for(int i=0; i<n; i++){
    cin >> a;
    if(a >= 10 && a <= 20) in++;
    else out++;
  }

  cout << in << " in\n";
  cout << out << " out\n";

  return 0;
}

//g++ -std=c++11 -o2 -Wall index.cpp -o test