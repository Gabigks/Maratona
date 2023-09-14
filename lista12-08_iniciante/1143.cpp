#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, vet[a];

  cin >> a;

  for(int i=0; i<a; i++){
    printf("%d %d %d\n", i, i*i, i*i*i);
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test