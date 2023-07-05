#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int> s;
  s.insert(5);
  // 3 baar bhi 5 daaldo wo ek hi baar count hoga as set takes unique elements
  s.insert(1);
  s.insert(0);
  s.insert(6); 
  for(auto i: s)

{
    cout<<i<<endl;
}
}