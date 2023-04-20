//did what i understood
/*#include<iostream>
using namespace std;
#include<vector>
template<typename t1,typename t2,typename t3=void>
t3 hashing(t1 v1,t2 s)
{
   vector<int> v2;
   v2.assign(s,0);
   for(int i=0;i<s;i++)
     v2[v1[i]]++;
   for(int i=0;i<v2.size();i++)
        if(v2[i]==0)
         continue;
        else
         cout<<"frequency of "<<i<<" is "<<v2[i]<<endl;
}
int main()
{
    vector<int> v={1,1,2,3,4,9,8,14,4,3,9,8,7};
    hashing<vector<int>,int>(v,v.size());
}*/

//10. Write a C++ program to implement Hash Table using Template Class.
#include<iostream>
using namespace std;
#include<vector>
template<typename t>
class hashing
{
private:
    vector<t> v={0};
public:
    void insertion(t num)
    {
        int i=num%10;
        v[i]=num;
    }
    string Search(t num)
    {
        int i=num%10;
        if(v[i]==num)
            return "found";
        else
            return "not found";
    }
};
int main()
{
    hashing<int> h;
    h.insertion(85);
    h.insertion(96);
    h.insertion(73);

    cout<<h.Search(85)<<endl;
    cout<<h.Search(76);


}
