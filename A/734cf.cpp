#include <bits/stdc++.h>

using namespace std;

#define MAXSIZE 100100

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int an = 0, d = 0, a;
  string input;

  cin >> a;
  cin >> input;

  for(int i=0; i<a; i++){
    if(input[i] == 'A') an++;
    else d++; 
  }

  if(an > d) cout << "Anton\n";
  else if(an < d) cout << "Danik\n";
  else if(an == d) cout << "Friendship\n";


  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test
//16:55 1 3
