#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    int i,j,c=0;
    cout<<"Enter a string :";
    getline(cin,str1);
    int l1=str1.length();
    if(l1==0){
        cout<<"Oops\nBlank line"<<endl;
        return 0;
    }
    cout<<"Enter another string :";
    getline(cin,str2);
    int l2=str2.length();
    if(l2==0)
    {
        cout<<"\nOops\n Blank line"<<endl;
        return 0;
    }
    if(l1!=l2)
    {
        cout<<"Could not find anagrams"<<endl;
        return 0;
    }
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(str1[i]==str2[j] || str1[i]==str2[j]-32 || str1[i]-32==str2[j])
                c+=1;
        }
    }
  //  cout<<c<<endl;
    if(c==l1)
        cout<<"anagram"<<endl;
    else
        cout<<"not anagram"<<endl;
    return 0;
}
