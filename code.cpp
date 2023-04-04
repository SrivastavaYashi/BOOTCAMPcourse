#include <iostream>
using namespace std;
#include<string>
int main() {
 //string str="AAABBB";
 string str="ABABABAB";
 int count=0,index=0,next=0,i=0;
 cout<<str<<endl;
 for(i=0;str[i];i++)
 {
     
     next=i+1;
     if(str[i]==str[next])
        {
          str[i]='\0';
          count++;
        }
        else
           { str[index]=str[i]; index++; str[i]='\0';}
        
 }
 if(str[next]!='\0')
 {str[index]=str[i]; str[i]='\0';}
 
 //new length of str
 cout<<"count="<<count<<endl<<"string="<<str;
 
}