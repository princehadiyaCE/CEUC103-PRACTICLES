#include<iostream>
using namespace std;

int main()
{
    int i,n;
    char j;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=65;j<=(i+64);j++)
        {
            cout<<j;
        }
        cout<<endl;
    }


}
