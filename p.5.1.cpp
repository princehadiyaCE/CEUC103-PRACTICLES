#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m[10],n,sum=0,i;
    float average,percentage;
 cout<<"------------------------------------------"<<endl;
 cout<<"STUDET RECORD MANAGEMENT SYSTEM"<<endl;
 cout<<"------------------------------------------"<<endl;

 cout<<"Enter Number of subjects :";
 cin>>n;
 cout<<endl;

 for(i=1;i<=n;i++)
 {
     cout<<"Enter marks of subject "<<i<<" :";
     cin>>m[i];
 }

cout<<"------------------------------------------"<<endl;
cout<<"Acadamic Result"<<endl;
cout<<"------------------------------------------"<<endl;

for(i=1;i<=n;i++)
{
    sum=sum+m[i];
}

average=sum/(n*1.0);
percentage=sum/(n*1.0);

cout<<"Total marks :"<<sum<<endl;
cout<<"average :"<<average<<endl;
cout<<"Percentage :"<<percentage<<"%"<<endl;

if(percentage<40)
{
    cout<<"Result"<<setw(15)<<":"<<"Fail"<<endl;
    cout<<"grade"<<setw(15)<<":"<<"F"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Failed"<<endl;
}
else if(percentage>=90)
{
    cout<<"Result"<<setw(15)<<":"<<"Pass"<<endl;
    cout<<"grade"<<setw(15)<<":"<<"O"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Outstanding"<<endl;
}
else if(percentage<=89 && percentage>=80)
{
    cout<<"Result"<<setw(20)<<":"<<"Pass"<<endl;
    cout<<"grade"<<setw(21)<<":"<<"A+"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Excellent"<<endl;
}
else if(percentage<=79 && percentage>=70)

{
    cout<<"Result"<<setw(15)<<":"<<"Pass"<<endl;
    cout<<"Grade"<<setw(15)<<":"<<"A"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Very Good"<<endl;
}
else if(percentage<=69 && percentage>=60)
{
    cout<<"Result"<<setw(15)<<":"<<"Pass"<<endl;
    cout<<"Grade"<<setw(15)<<":"<<"B+"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Good"<<endl;
}
else if(percentage<=59 && percentage>=50)
{
    cout<<"Result"<<setw(15)<<":"<<"Pass"<<endl;
    cout<<"Grade"<<setw(15)<<":"<<"B"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Satisfactory"<<endl;
}

else if(percentage<=49 && percentage>=40)
{
    cout<<"Result"<<setw(15)<<":"<<"Pass"<<endl;
    cout<<"Grade"<<setw(15)<<":"<<"C"<<endl;
    cout<<"Performance"<<setw(15)<<":"<<"Needs Improvement"<<endl;
}
}
