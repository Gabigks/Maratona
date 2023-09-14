#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int a;

  cin >> a;

  for(int j=0; j<a; j++){ 

    string s;
    vector<char> permut;
    cin >> s;

    sort(s.begin(), s.end());

    for(int i=0; i<s.length(); i++){
      permut.push_back(s[i]);
    }
    
    do {
      for(int i=0; i<s.length(); i++){
        cout << permut[i];
      }
      cout << "\n";
    } while (next_permutation(permut.begin(), permut.end()));
    permut.clear();
    cout << "\n";
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test