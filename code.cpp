Given a string, find minimum number of deletions required so that there will be no two consecutive repeating characters in the string.

Examples: 

Input : AAABBB
Output : 4
Explanation : New string should be AB

Input : ABABABAB
Output : 0
Explanation : There are no consecutive repeating characters.
 
//myapproach
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


//gfg approach
#include <iostream>
using namespace std;
#include<string>
int minsteps(string str)
{
    int steps=0;
    
    for(int i=0;i<str.length()-1;i++)
       if(str[i]==str[i+1])
         steps++;
         
    return steps;     
}
int main() {
 string str="AAABBB";
 string str1="ABABABAB";
 cout<<"minsteps="<<minsteps(str1);
 
}
