//3.Write a C++ program to find the largest of three elements using a template.
#include<iostream>
using namespace std;
template<typename t1,typename t2,typename t3>
t3 largest(t1 a,t2 b,t3 c)
{
    return a>b?a>c?a:c:b>c?b:c;
}
int main()
{
    cout<<largest<int,int,int>(5,80,10)<<endl;
    cout<<largest<float,int,double>(50.94,80,100.23456)<<endl;
    cout<<largest<char,char,char>('m','z','l')<<endl;
}
