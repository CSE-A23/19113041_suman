#include <stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr;
    getline(cin,arr);
    int siz=arr.size(),i=0,max=0,words=0,lc=0,tr[siz],sc=0;
    while(i<siz)
     {
      if(arr[i]==' '||i==(siz-1))
       { 
           tr[words]=i-lc;
           if(words>0)
           tr[words]=i-lc+1;
           words++;
           lc=0;
           sc++;
       }
      i++;
      lc++;
     }
     int ss[words];
     for(i=1;i<words;i++)
     {
         ss[i-1]=tr[i]-tr[i-1]-1;
     }
     ss[words-1]=arr.size()-tr[words-1];
     int pos,pos1;
     cout<<"\n";
     for(i=0;i<words;i++)
      {
          for(int j=0;j<words;j++)
           {
               if(ss[j]>max)
               { 
                   max=ss[j];
                   pos=tr[j];
                   pos1=j;
               }
           } 
          cout<<arr.substr(pos,max)<<" "; 
          ss[pos1]=0;
          max=0;
      }
    return 0;
}
