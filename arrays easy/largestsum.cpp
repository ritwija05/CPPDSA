#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int> &arr, int n)
{
    int max_no=arr[0];
    for (int i = 1; i <n ; ++i)
    {
        if (max_no<arr[i])
        {
            max_no=arr[i];
        }
    }
    return max_no;
}
int main()
{
    cout<<"Hello";
    return 0;
}