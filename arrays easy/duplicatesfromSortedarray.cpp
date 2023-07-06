#include<vector>
#include<iostream>
using namespace std;
 
/*
 removeDuplicates function iterates through the input vector, 
 comparing each element with the last unique element found.
 If a new unique element is encountered, 
 it is placed in the next position in the vector.
 A very good two pointer starter question in o(1) time complexity 
*/
int removeDuplicates(vector<int> &nums)
{
    int n=nums.size();
    int newIndex=0;// index for new array
    for(int i=1;i<n;i++)
    {
       
        if(nums[i]!=nums[newIndex])
        {
            newIndex++;
            nums[newIndex]=nums[i];
        }
    }
    return newIndex+1;//length of unique elements
}
/*
we can use nums.erase(unique(nums.begin(),nums.end()),nums.end()) as well 
*/