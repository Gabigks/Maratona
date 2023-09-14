#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  string j1, j2, a, b;
  int qt;

  cin >> qt;

  for(int i=0; i<qt; i++){
    int n1, n2;
    cin >> j1 >> a >> j2 >> b;
    cin >> n1 >> n2;
    if((n1+n2)%2 == 1) {
      if(a == "IMPAR") cout << j1 << endl;
      else cout << j2 << endl;
    }else {
      if(a == "PAR") cout << j1 << endl;
      else cout << j2 << endl;
    }
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test