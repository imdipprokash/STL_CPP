#include <iostream>
#include<list>

using namespace std;


int main() {
  // std::cout << "Hello World!\n";
  list<int> l;
  //copy l to n
  list<int> n(l);
  //Initilige a list that will be 5 element each should be 100
  list<int> nl(5,100);
  for(int i:nl){
    cout<<i<<endl;
  }
  l.push_back(1);
  l.push_front(2);
  for(int i:l){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Size before Erase->"<<l.size()<<endl;
  l.erase(l.begin());
  cout<<"After Erase ->"<<l.size()<<endl;
} 