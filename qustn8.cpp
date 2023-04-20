//8. Write a C++ Program to implement push and pop methods from stack using template.
#include<iostream>
using namespace std;
template<typename t>
class stack
{
    int top=-1;
    t star[100];
public:
    void push(t num)
    {
        top++;
        star[top]=num;
    }
    t pop()
    {
        t pop;
        pop=star[top];
        top--;
        return pop;
    }

    bool empty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
};
int main()
{
    stack<int> s;
    for(int i=0;i<6;i++)
        s.push(i);

    while(!s.empty())
    {
        cout<<s.pop()<<endl;
    }

    stack<string> s1;
    s1.push("world");
    s1.push("hello");
    cout<<s1.pop()<<endl<<s1.pop();
}

