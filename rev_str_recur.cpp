#include<iostream>
#include<string>
using namespace std;

void reverse(const string& s)
{
   // cout<<"\n"<<s<<endl;
    size_t n=s.size();
    if(n==1)
    {
            cout<<s;
    }
    else
    {

        cout<<s[n-1];
        return reverse(s.substr(0,n-1));
    }}
    int main(){
        string n;
        getline(cin,n);
        int l=n.length();
	if(l==0 ) {
            cout<<"Oops \nempty string"<<endl;
return 0;
	}
        reverse(n);
        return 0;
    }

