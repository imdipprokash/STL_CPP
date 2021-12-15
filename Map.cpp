#include <iostream>
#include<map>
using namespace std;
int main() {
  map<int,string> m;
  m[1]="Dip";
  m[3] = "Sardar";
  m[2] = "Prokash";
  m.insert({4,"Joyprokash sardar"});
  cout<<"before erase"<<endl;
  for (auto i:m){
    cout<<'\t'<<i.first;
    cout<<'\t'<<i.second<<endl;
  }
  cout<<"Finding 5 index->"<<m.count(5)<<endl;
  m.erase(4);
  cout<<"After erase"<<endl;
  for (auto i:m){
    cout<<'\t'<<i.first;
    cout<<'\t'<<i.second<<endl;
  }



  // std::cout << "Hello World!\n";
} 