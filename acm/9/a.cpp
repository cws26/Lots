#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  int n;
  vector<int> v;
  set<int> arr;
  cin >> n;
  for(int i = 0; i < n; ++i){
    int j;
    cin >> j;
    arr.insert(j);
  }
  for(set<int>::iterator it = arr.begin(); it != arr.end(); ++it){
    v.push_back(*it);
  }
  if(v.size() < 3){
    cout << "NO" << endl;
    return 0;
  }
  for(int i = 0; i < v.size()-2; i++){
    if(v[i]+1 == v[i+1] && v[i]+2 == v[i+2]){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
