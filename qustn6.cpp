
//6. Write a C++ Program to find Sum of Array using function template.
#include<iostream>
using namespace std;
template<typename t>
t sum_array(t a[],int n)
   {
       t sum=0;
       for(int i=0;i<n;i++)
        sum+=a[i];
       return sum;
   }
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<sum_array<int>(arr,size);
    cout<<endl;
    float ar[2]={1.1,1.2};
    cout<<sum_array<float>(ar,2);
}
