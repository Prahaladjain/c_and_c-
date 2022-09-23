#include<iostream.h>
#include<conio.h>
class A
{
public:
void show()
{
cout<<"From A\n";
}
};
class B:virtual public A
{
// cout<<"From B\n";
};
class C:virtual public A
{
// cout<<"From c\n";
};
class D:public B,public c
{
// cout<<"From d\n";
};
void main()
{
clrscr();
D obj;
obj.show();
getch();
}
