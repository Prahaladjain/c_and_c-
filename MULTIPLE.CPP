#include<iostream.h>
#include<conio.h>
class A
{
public:
int x;
void getx()
{
cout<<"Enter value of x:";
cin>>x;
}
};
class B
{
public:
int y;
void puty()
{
cout<<"Enter value of y:";
cin>>y;
}
};
class c: public A,public B
{
public:
void show()
{
cout<<"sum="<<x+y;
}
};
void main()
{
clrscr();
c obj1;
obj1.getx();
obj1.puty();
obj1.show();
getch();
}