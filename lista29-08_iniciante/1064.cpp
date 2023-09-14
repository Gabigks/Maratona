#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int i = 0, cont = 0;
  double a, sum = 0;

  while (i < 6){
    cin >> a;
    if(a > 0){
      sum+=a;
      cont++;
    }
    i++;
  }
  printf("%d valores positivos\n", cont);
  printf("%.1f\n", sum/cont);

  return 0;

}

//g++ -std=c++11 -o2 -Wall index.cpp -o test