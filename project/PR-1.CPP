#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,z;
clrscr();
cout<<"enter the value of x";
cin>>x;
cout<<"enter the value of y";
cin>>y;
z=y;
y=x;
x=z;
cout<<"after swiping x"<<x;
cout<<" after swiping y"<<y;
getch();
return 0;

}
