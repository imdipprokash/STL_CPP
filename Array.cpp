#include <iostream>
#include<array>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  array<int,4> a = {1,2,3,4};
  int size = a.size();
  for(int i =0; i<size;i++){
    cout<<a[i]<<endl;
  }
  cout<<"Empty 1 or Not 0 :  "<<a.empty()<<endl;
  cout<<"Element of 2->(0,1,2,3) index "<<a.at(2)<<endl;
  cout<<"Last element of the array: "<<a.back()<<endl;
  cout<<"First element of the array: "<<a.front()<<endl;
  return 0;
} 