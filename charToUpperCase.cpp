#include<iostream>
using namespace std;

int main()
{

    char ch;

    cout<<"Enter any Alphabet "<<endl;
    cin>>ch;

        if(ch>95&&ch<123)
        {
            ch=ch-32;
            cout<<ch;
        }
        else
        {
            ch=ch+32;
            cout<<ch;
        }
        return 0;

}
