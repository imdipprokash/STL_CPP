#include <iostream>
#include<set>
using namespace std;


int main() {
  // std::cout << "Hello World!\n";
set<int> s;
s.insert(0);
s.insert(0);
s.insert(3);
s.insert(5);
s.insert(8);
s.insert(8);
s.insert(0);
for (int i:s){
  cout<<i<<endl;
}

cout<<endl;
set<int>::iterator it = s.begin();
it++;

s.erase(it);
for(auto i:s){
  cout<<i<<endl;
}

cout<<"Is 5 present or not-> "<<s.count(5)<<endl;

set<int>::iterator itr = s.find(5);
int count=0;
for (auto i:s)
{
  if(i < 5){
    count ++;
  }
  if (i == 5){
    count ++;
    break;
  }
}
cout<<"Location of 5 is ->"<<count<<endl;
} 