#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int sem;
    long long int mobno;
    string name,enroll,br;

cout<<"***********************************************"<<endl;
cout<<"* STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
cout<<"***********************************************"<<endl;
5
cout<<"Software Version :"<<endl;
cout<<"Institute :"<<endl;
cout<<"Acadamic Year :"<<endl;

cout<<"------------------------------------------"<<endl;
cout<<"Student Registration"<<endl;
cout<<"------------------------------------------"<<endl;

cout<<"Enter Enrollement Number : "<<endl;
cin>> enroll;

cout<<"Enter student Name :"<<endl;
cin>> name;

cout<<"Branch :"<<endl;
cin>> br;

cout<<"Enter semester :"<<endl;
cin>> sem;

cout<<"Enter Mobile Number :"<<endl;
cin>> mobno;

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
