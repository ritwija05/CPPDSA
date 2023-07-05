#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,4};//hai to static hi isliye use nhi krte
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"First element"<<a.front()<<endl;
    cout<<"element at 2nd index"<<a.at(2)<<endl;
}
