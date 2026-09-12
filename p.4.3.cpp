#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int sem,m1,m2,m3,total,eyc;
    float average,percentage;
    long long int mobno;
    string name,enroll,br;

cout<<"------------------Main Menu---------------------"<<endl;

M:cout<<"1. Register New Student\n2. Display Student Record\n3. Enter Student Marks\n4. Display Academic Result"<<endl;

 cout<<"Enter Your Choice :";
 cin>>eyc;


switch(eyc)
{
case 1:
{
cout<<"------------------------------------------"<<endl;
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
goto M;
break;
}
case 2:
{


cout<<"------------------------------------------"<<endl;
cout<<"Student Information"<<endl;
cout<<"------------------------------------------"<<endl;

cout<< left << setw(25) <<"Enter Enrollement Number"<<":";
cin>> enroll;

cout<< left <<setw(25) <<"Enter student Name" << ":";
cin>> name;

cout<< left <<setw(25) <<"Branch"<<":";
cin>> br;

cout<< left <<setw(25) <<"Enter semester"<<":";
cin>> sem;

cout<< left <<setw(25) <<"Enter Mobile Number"<<":";
cin>> mobno;
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
cout<<"------------------------------------------"<<endl;
cout<<"Student Information"<<endl;
cout<<"------------------------------------------"<<endl;

cout<< left << setw(25) <<"Enter Enrollement Number"<<":";
cin>> enroll;

cout<< left <<setw(25) <<"Enter student Name" << ":";
cin>> name;

cout<< left <<setw(25) <<"Branch"<<":";
cin>> br;

cout<< left <<setw(25) <<"Enter semester"<<":";
cin>> sem;

cout<< left <<setw(25) <<"Enter Mobile Number"<<":";
cin>> mobno;
}



