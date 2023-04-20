//5. Write a C++ Program to Add two numbers using function template.
#include <iostream>
using namespace std;
template<typename t2,typename t3,typename t1>
t1 add(t2 a,t3 b)
{
    return a+b;
}
int main() {
    // Write C++ code here
    cout<<add<int,int,int>(4,5)<<endl;
    cout<<add<float,float,float>(2.2,3.3)<<endl;
    cout<<add<char,char,int>('1','0')<<endl;

    return 0;
}
