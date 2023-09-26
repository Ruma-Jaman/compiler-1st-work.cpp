#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s); //a=b+c;
    cout<<s<<endl;
    for(int i=0;i<7;i++)
    {
        if(i=0)cout<<"<id, "<<i<<">"<<endl;
        else if (i=1)cout<<"<=>"<<endl;
        else if (i=2)cout<<"<id,"<<i-1<<">"<<endl;
        else if (i=3)cout<<"<"<<s[i]<<">"<<endl;
        else if (i=4)cout<<"<id,"<<i-2<<">"<<endl;
        else if (i=5)cout<<"<"<<s[i]<<">"<<endl;
    }
    return 0;
}
