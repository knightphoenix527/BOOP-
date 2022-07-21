#include<iostream.h>
#include<conio.h>
class student{
public:
int rno,fees;
char name[20],branch[20];
void disp(){
cout<<"your name is "<<name<<endl;
cout<<"your roll number is "<<rno<<endl;
cout<<"your branch is "<<branch<<endl;
cout<<"your fees is "<<fees<<endl;
} };
void main()
{
student::student(){
cout<<"Enter your name ";
cin>>name;
cout<<"Enter your roll number ";
cin>>rno;
cout<<"Enter your  branch ";
cin>>name;
}
}
