#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v;
    cout<<v.size()<<" ";//initially jab vector declare krte uska size hota hai 0
    v.push_back(1);//end mei add krta element
    cout<<v.size()<<" ";//size bataata kitne elements pade
    //vector apna size double kr leta hai
    v.push_back(2);
    v.push_back(3);
    cout<<v.capacity()<<" ";//size will be 3 capacity will bee doubled ie 4
    cout<<v.front()<<endl;
    //before pop
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();

//after pop (end mei se ek nikaldo)
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
}