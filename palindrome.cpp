#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    string a;
    cout<<"Enter a word: " ;
    cin>>a;
    cout<<"Length: "<<a.length()<<endl;
    cout<<"Upper:";
    for(char c:a)
    cout<<(char)toupper(c);
    cout<<endl;
    bool pal=true;
    for(size_t i=0;i<a.length()/2;i++)
    {
        if(a[i]!=a[a.length()-1-i])
        {
            pal=false;
            break;
        }
    }
}