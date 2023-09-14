#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, aux;
  long long res=0;

  cin >> a >> b;

  if(a < b){
    aux = a;
    a = b;
    b = aux;
  }
  b++;
  while(b < a){
    if(b < 0) {if(((b*(-1)) % 2) != 0) res+=b;}
    else {if((b % 2) != 0) res+=b;}

    b++;
  }

  cout << res << endl;

  return 0;
}

//g++ -std=c++11 -o2 -Wall index.cpp -o test