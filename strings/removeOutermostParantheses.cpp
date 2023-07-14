#include<iostream>
using namespace std;
string removeOuterParantheses(string s)
{
    string ans="";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
        {
            if(count>0)
            {
                ans+=s[i];
            }
            count++;
        }
        else if(s[i]==')')
        {
            count--;
            if(count>0)
            {
                ans+=s[i];
            }
        }
        return ans;
    }
}