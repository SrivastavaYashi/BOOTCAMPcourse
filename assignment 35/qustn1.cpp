#include<iostream>
using namespace std;
template <class t1,class t2,class t3>
t3 add(t1 a,t2 b)
{
    return a+b;
}
int main()
{
    cout<<add<float,int,float>(4.5,5.7)<<endl;
    cout<<add<float,float,float>(4.0,5.5)<<endl;
    cout<<add<char,int,char>('a',5)<<endl;
    return 0;
}
