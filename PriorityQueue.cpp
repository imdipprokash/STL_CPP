#include <iostream>
#include<queue>
using namespace std;
int main() {
  //std::cout << "Hello World!\n";
  //Maxheap
  priority_queue <int> maxp;

  //Mini heap
  priority_queue <int, vector<int>,greater<int>> minp;

  maxp.push(1);
  maxp.push(4);
  maxp.push(3);
  maxp.push(2);
int n = maxp.size();
  for (int i=0;i<n;i++){
    cout<<maxp.top()<<endl;
    maxp.pop();
  }

  cout<<endl;
  cout<<"Min programming"<<endl;
minp.push(1);
minp.push(7);
minp.push(2);
minp.push(4);
int minSize = minp.size();
for (int i = 0;i<minSize;i++){
  cout<<minp.top()<<endl;
  minp.pop();
}
cout<<"Empty or Not->"<<minp.empty()<<endl;


} 