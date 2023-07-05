#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    //l.erase(l.begin()); ek ek delete ho jayega
 // list ya deque copy krna dusre list mei to 
 //list<int> n(l); ab l ismei copy ho jayegi
 // list<int> n(5,100); to 5 baar 100 print hoga
}
