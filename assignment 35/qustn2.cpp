//2.Write a C++ Program to find Largest among two numbers using function template.
#include<iostream>
using namespace std;
template<typename z,typename y>
z max(z a,y b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<max<int,int>(10,100)<<endl;
    cout<<max<float,int>(100.123,100)<<endl;
    cout<<max<float,float>(14.9,1.2)<<endl;
    cout<<max<int,float>(14.9,1.2)<<endl;
    cout<<max<char,char>('v','s')<<endl;
}
