#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void NextPermutation(vector <int> &nums)
{
    //lexicographically ordered 
    int n=nums.size();
    //step 1
    int i=n-1;
    while(i>0&&nums[i-1]>=nums[i])
    {
        i--;
    }
    //step 2
    int j=n-1;
    while(j>0&&nums[i-1]>=nums[j])
    {
        j--;
    }
    //what if i 0 aa gaya
    if(i==0)
    {
        reverse(nums.begin(),nums.end());
    }
    //step 3
    swap(nums[i-1],nums[j]);
    //step 4
    reverse(nums.begin()+i,nums.end());
}