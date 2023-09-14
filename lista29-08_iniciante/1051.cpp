#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  double a;

  cin >> a;

  if(a < 2000) printf("Isento\n");
  else if(a <= 3000) printf("R$ %.2f\n", (a-2000)*0.08);
  else if(a <= 4500) printf("R$ %.2f\n", 80 + (a-3000)*0.18);
  else printf("R$ %.2f\n", 350 + (a-4500)*0.28);

  return 0;
}