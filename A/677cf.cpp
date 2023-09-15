#include <bits/stdc++.h>

using namespace std;

#define MAXSIZE 100100

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  unsigned short n, h, a, sum = 0;

  cin >> n >> h;

  for(unsigned short i=0; i<n; i++){
    cin >> a;
    if(a > h) sum+=2;
    else sum+=1;
  }

  cout << sum << "\n";

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test