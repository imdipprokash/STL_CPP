#include <iostream>
#include<queue>
using namespace std;

int main() {
queue <string> q;
q.push("Dip");
q.push("joy");
q.push("sardar");
cout<<"Top element->"<<q.front()<<endl;
q.pop();
cout<<"Top element->"<<q.front()<<endl;
cout<<"Size of queue->"<<q.size()<<endl;
cout<<"Empty or Not->"<<q.empty()<<endl;
} 