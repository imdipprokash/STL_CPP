#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
  vector <int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(7);
  v.push_back(9);

  cout<<binary_search(v.begin(),v.end(),7)<<endl;
  cout<<"Lower bund ->"<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
  cout<<"Upper Bound->"<<upper_bound(v.begin(),v.end(),10)-v.begin()<<endl;


  int a=5,b=15;
  cout<<"Max->"<<max(a,b)<<endl;
  cout<<"Min->"<<min(a,b)<<endl;
  cout<<"Before the value of "<<"a->"<<a<<"\t b->"<<b<<endl;
  swap(a,b);
  cout<<"Aftr swap the value "<<"a ->"<<a<<'\t'<<"b->"<<b<<endl;

  string abc="abcd";
  reverse(abc.begin(),abc.end());
  cout<<"String reverse ->"<<abc<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"After rotate"<<endl;
for (auto i:v){
  cout<<i<<endl;
}
//Let's Sort
sort(v.begin(),v.end());
cout<<"After sorting:"<<endl;
for (auto i:v){
  cout<<i<<" ";
}
} 