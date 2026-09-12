#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int sem,m1,m2,m3,total,eyc,x=0;
    float average,percentage;
    long long int mobno;
    string name,enroll,br;
    char ans;

cout<<"------------------Main Menu---------------------"<<endl;

M:cout<<"1. Register New Student\n2. Display Student Record\n3. Enter Student Marks\n4. Display Academic Result"<<endl;

 cout<<"Enter Your Choice :";
 cin>>eyc;


switch(eyc)
{
case 1:
{
do
    {

P:cout<<"------------------------------------------"<<endl;
cout<<"Student Registration"<<endl;
cout<<"------------------------------------------"<<endl;

cout<<"Enter Enrollement Number :";
cin>> enroll;

cout<<"Enter student Name :";
cin>> name;

cout<<"Branch :";
cin>> br;

cout<<"Enter semester :";
cin>> sem;

cout<<"Enter Mobile Number :";
cin>> mobno;

cout<<"Student Registered Successfully"<<endl;

L:cout<<"Register Another Student? (Y/N) :";
cin>>ans;
    x=1;

    do
    {
       cout<<" Error : enter full data"<<endl;
       goto P;

       if(ans=Y)
       {
           goto P;
       }
       else if (ans=N)
       {
           goto M;
       }
       else
       {
            cout<<" Error : invalid input"<<endl;
            goto L;
       }
    }while(x!=1);


}while(x=1);
}
case 2:
{
if(x==1)
{
cout<<"------------------------------------------"<<endl;
cout<<"Student Information"<<endl;
cout<<"------------------------------------------"<<endl;

cout<< left << setw(25) <<"Enrollement Number"<<":"<<enroll<<endl;


cout<< left <<setw(25) <<"student Name" << ":"<<name<<endl;

cout<< left <<setw(25) <<"Branch"<<":"<<br<<endl;


cout<< left <<setw(25) <<"semester"<<":"<<sem<<endl;


cout<< left <<setw(25) <<"Mobile Number"<<":"<<mobno<<endl;
}
else
{
    cout<<"data is not entered"<<endl;
}
goto M;
break;
}

case 3:
{

cout<<"------------------------------------------"<<endl;
cout<<"Acadamic Information"<<endl;
cout<<"------------------------------------------"<<endl;

cout<<"Enter mathematics marks :";
cin>>m1;

cout<<"Enter Physics marks :";
cin>>m2;

cout<<"Enter computer programming marks :";
cin>>m3;


cout<<"------------------------------------------"<<endl;
cout<<"Acadamic summery"<<endl;
cout<<"------------------------------------------"<<endl;

total=m1+m2+m3;
average=(m1+m2+m3)/3.0;
percentage=(m1+m2+m3)/3.0;

cout<<"Total marks :"<<total<<endl;
cout<<"average :"<<average<<endl;
cout<<"Percentage :"<<percentage<<"%"<<endl;
goto M;
break;

}
case 4:
{


cout<<"------------------------------------------"<<endl;
cout<<"Acadamic Result"<<endl;
cout<<"------------------------------------------"<<endl;

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
goto M;
break;
}
case 5:
    {
        exit;

        break;
    }
}
}





