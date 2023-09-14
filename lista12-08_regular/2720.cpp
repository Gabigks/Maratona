#include <bits/stdc++.h>

using namespace std;

#define MAXSIZE 100100

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  unsigned long long a, n, k, id, alt, lar, comp;
  cin >> a;

  for(int i=0; i<a; i++){
    
    vector<pair<unsigned long long, unsigned long long> > v;
    vector<unsigned long long> vaux;

    v.reserve(MAXSIZE);
    vaux.reserve(MAXSIZE);

    cin >> n >> k;

    for(int j=0; j<n; j++){
      cin >> id >> alt >> lar >> comp;
      v.push_back(make_pair(id, (alt*lar*comp)));
    }

    sort(v.begin(), v.end(), [](const auto& x, const auto& z) {
      return x.second > z.second;
    });

    for(int l=0; l<k; l++){
      vaux.push_back(v[l].first);
    }

    sort(vaux.begin(), vaux.end());

    for(int p=0; p<(vaux.size()) - 1; p++){
      cout << vaux[p] << " ";
    }
    cout << vaux[k-1] << endl;

    v.clear();
    vaux.clear();
  }

  return 0;
}
//g++ -std=c++11 -o2 -Wall index.cpp -o test