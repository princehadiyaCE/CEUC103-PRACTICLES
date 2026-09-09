#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int sem,m1,m2,m3,total;
    float average,percentage;
    long long int mobno;
    string name,enroll,br;

cout<<"***********************************************"<<endl;
cout<<" STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
cout<<"***********************************************"<<endl;

cout<<"Software Version : 1.2"<<endl;

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

cout<<"------------------------------------------"<<endl;
cout<<"Acadamic Result"<<endl;
cout<<"------------------------------------------"<<endl;

if(percentage<40)
{
    cout<<"Result : Fail"<<endl;
    cout<<"phadhle be fail ho gaya"<<endl;

}
else
{
    cout<<"Result : Pass"<<endl;
    cout<<"Congratulation! you are passed in exam"<<endl;
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


