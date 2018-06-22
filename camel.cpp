#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string n;
    getline(cin,n);
    int no,i=0,p=1;
    no=n.length();
    for(i=0;i<no;i++)
    {
        if(p==1)
        {
            if(!(n[i]>=65 && n[i]<=90))
            n[i]-=32;
            p=0;
        }
        if(n[i]==' ')
            p=1;
    }
    cout<<n;
    }
