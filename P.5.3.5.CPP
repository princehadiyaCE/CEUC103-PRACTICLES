#include<iostream>
using namespace std;

int main()
{
    int i,n,l,j,m;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        for(l=1;l<=(n-i);l++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
       for(m=i-1;m>=1;m--)
       {
           cout<<m;
       }

        cout<<endl;
    }
}
