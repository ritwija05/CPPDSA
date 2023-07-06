#include <vector>
#include <iostream>
using namespace std;
int print2largest(int arr[],int n)
{
    int largest ,secondlargest =INT_MIN;
    for (int i=0 ;i<n  ;++i)
    {
        if (arr[i]>largest )
        {
            secondlargest = largest ;
            largest = arr[i] ;
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest = arr[i];
        }
    }
    if(secondlargest==INT_MIN)
    {
        return -1;
    }
    else{
        return secondlargest;
    }
}
int main()
{
    cout<<"successful";
    return 0;
}