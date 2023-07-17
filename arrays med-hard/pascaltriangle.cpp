#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for(int i=0;i<numRows;i++)
    {
        ans[i].resize(i + 1);
        ans[i][0]=1;//nC0
        ans[i][i]=1; //nCn
        for(int j=1;j<i;j++)
        {
            ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
        }
    }
        return ans;
}
