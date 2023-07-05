#include<bits/stdc++.h>
using namespace std;
int main()
    {
        map<int,string> m;
        m[1]="love";
        m[2]="babbar";
        m[13]="Kumar";
        //either this or m.insert(5,"bheem") both work
        for(auto i:m)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        auto it=m.find(5);//corresponding iterator return krta
        for(auto i=it;i!=m.end();it++)
    {
        cout<<(*i).first<<endl;
    }
    }