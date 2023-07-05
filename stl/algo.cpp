#include<bits/stdc++.h>
using namespace std;
int main()
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(3);
        v.push_back(6);
        v.push_back(7);

        //applying Binary search on it
        cout<<binary_search(v.begin(),v.end(),6)<<endl;
        cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
        cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
        rotate(v.begin(),v.begin()+1,v.end());
        for (int i:v)
        {
            cout<<i<<" ";
        }
        //swap(a,b) then max min and reverse(s.begin(),s.end()) same with sort
   
    }
