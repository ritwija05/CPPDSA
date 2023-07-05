#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int>d;
    d.push_back(1);//peeche se 1 daala
    d.push_front(2);//age se 2 daala O/p 2 1
    /* for(int i:d)
    {
        cout<<i<<" ";
    } */
    /* d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    } */
    cout<<"print first index element "<<d.at(1)<<endl;//.at used to get element at specific index
    //erase ke baad size 0 hota but max size 0 nhi hota
}