#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        int l=0;// jo bhi 0 hai wo iske peeche
        int m=0;
        int h=nums.size()-1;//2 iske aage
        while(m<=h)
        {
            int x=nums[m];// m is more sort of a mover / pointer
            if(x==0)
            {
                swap(nums[l],nums[m]);
                ++l;++m; // move left and mid pointers to next position
            } 
            else if(x==1)
            {
                m++;
            }
            else{
                swap(nums[m],nums[h]);--h;
                
            }

        }
    }