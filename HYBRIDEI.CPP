#include<iostream.h>
#include<conio.h>
class A
{
public:
int x;
};
class B:public A
{
public:
B()
{
x=10;
}
};
class c
{
public:
int y;
c()
{
y=4;
}
};
class D:public B,public c
{
public:
void sum()
{
clrscr();
cout<<"sum="<<x+y;
}
};
void main()
{
clrscr();
D obj1;
obj1.sum();
getch();
}
