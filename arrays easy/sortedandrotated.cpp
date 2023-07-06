#include<vector>
#include<iostream>
using namespace std;
bool check(vector<int> &nums)
{
    int n=nums.size();
    int decreasingCount=0;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]>nums[i-1])
        {
            decreasingCount++;
        }

    }
    if(nums[n-1]>nums[0])
    {
    decreasingCount++;
    }
    return decreasingCount <= 1;
}
//now we will look at the second approach as well where we use the wrapping effect"%"
bool check2(vector <int> &nums)
{
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>nums[(i+1)%nums.size()])
        {
            count++;
        }
    }
    return count <=1;
}
//the dry run for this [3,4,5,1,2] i=0 1%5 =1 3>4 no therefore no count ++ but when i=2 
// 3%5 =3 5>1 count increases and at 5%5 =0 this removes the need of extra if condition 
//automatically traces back to the first element ie is 2>3
int main()
{
    cout<<"Success";
    return 0;
}