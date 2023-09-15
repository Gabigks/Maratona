#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      cin >> n;
      if(n == 1){
        cout << abs(i-3)+abs(j-3) << endl;
        break;
      }
    }
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//08:11 1
