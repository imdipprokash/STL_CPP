#include <iostream>
#include <vector>
using namespace std;
int main() {
  std::cout << "Hello World!\n";
  vector <int> v;
  cout<<"Capacity ->"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"Capacity ->"<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"Capacity ->"<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"Capacity ->"<<v.capacity()<<endl;

  cout<<"Size of the vector is : "<<v.size()<<endl;
  for (int i:v){
    cout<<i<<" ";
  }
  v.pop_back();
  cout<<"After POP the eleme in vector"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }
cout<<endl;
  cout<<"Before clear size and capacity "<<v.size()<<" "<<v.capacity()<<endl;
  v.clear();
cout<<"After clear size & Capacity "<<v.size()<<" "<<v.capacity()<<endl;

} 