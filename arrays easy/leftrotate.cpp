#include<iostream>
#include<vector>
using namespace std;
void leftRotation(int arr[], int k, int n)
{
    if(k>n)
    {
        k=k%n;    
        }
    reverse(arr,arr+k);//k tak
    reverse(arr+(k),arr+n); //bache hue
    reverse(arr,arr+n);//puri array
}
/*
ismei ek vector banake normal iterators bhi use kr skte
and copy function usee krke array pr daalo
vector<int>vec(arr,arr+n)
rotate(vec.begin(),vec.begin()+k,vec.end());
copy(vec.begin(),vec.end(),arr)
*/
int main()
{
    cout<<"sucess";
    return 0;
}
