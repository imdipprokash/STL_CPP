#include <iostream>
#include<stack>

using namespace std;
int main() {
  stack <string> s;
  s.push("Dipprokash");
  s.push("Sardar");
  cout<<"Top Element->"<<s.top()<<endl;
  s.pop();
  cout<<"Top Element ->"<<s.top()<<endl;
  cout<<"Size of stack "<<s.size()<<endl;
  cout<<"Empty or Not ->"<<s.empty()<<endl;

} 