#include<iostream>
using namespace std;

int main()
{
    int i,l,n;
    char j,a,m;
    a='A';
    cout<<"Enter the value of n : ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        for(l=1;l<=(n-i);l++)
        {
            cout<<" ";
        }
        for(j=65;j<=(i+64);j++)
        {
            cout<<j;
        }
       for(m=j-2;m>=a;m--)
       {
           cout<<m;
       }

        cout<<endl;
    }
}
