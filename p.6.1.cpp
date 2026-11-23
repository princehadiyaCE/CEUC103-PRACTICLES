#include<iostream>
using namespace std;

int main()
{
    int SC[100],n,i;
    string PID[100],PN[100];

    cout<<"********************************************"<<endl;
    cout<<"Sports Events Score Analysis"<<endl;
    cout<<"********************************************"<<endl;

    cout<<"Enter number of participants : ";
    cin>>n;


    for(i=0;i<=n;i++)
    {
    cout<<"Enter Participant ID : ";
    cin >> PID[i];

    cout<<"Enter Participant Name : ";
    cin>>PN[i];

    cout<<"Enter Score : ";
    cin>>SC[i];

    cout<<endl;
    }


    cout<<"---------------------------------------------"<<endl;
    cout<<"Participant Performance"<<endl;
    cout<<"---------------------------------------------"<<endl;

    cout<<"ID"<<" "<<"Name"<<" "<<"Score"<<endl;

    cout<<"---------------------------------------------"<<endl;

    for(i=0;i<n;i++)
    {
      cout<<PID[i]<<" "<<PN[i]<<" "<<SC[i]<<endl;
    }
}
