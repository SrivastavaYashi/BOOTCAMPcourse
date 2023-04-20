//4. Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<typename t1,typename t2>
void swap(t1 &p1,t2 &p2)
{
    t1 temp;
    temp=p1;
    p1=p2;
    p2=temp;
}
int main()
{

   int a=5; int b=6;
   float c=5.5; float d=10.5;
   char t='c',p='5';
   swap<int,int>(a,b);
   swap<float,float>(c,d);
   swap<char,char>(t,p);
   cout<<"a="<<a<<" b="<<b;
   cout<<endl;
   cout<<"c="<<c<<" d="<<d;
   cout<<endl;
   cout<<"t="<<t<<" p="<<p;
   return 0;
}
