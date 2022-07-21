#include<iostream.h>
#include<conio.h>
class dev
{
private:
int sum;
public:
dev(int a,int b)
{
sum=a/b;
}
void show()
{
cout<<sum<<endl;
}
};
int main()
{
int x,y;
clrscr();
cout<<"enter x:";
cin>>x;
cout<<"enter y:";
cin>>y;

dev ob(x,y);
ob.show();
return 0;
}