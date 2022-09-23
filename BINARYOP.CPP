
#include<iostream.h>
#include<conio.h>
class complex
{
int a,b;
public:
void getvalue()
{
cout<<"Enter the value of complex number a&b:";
cin>>a>>b;
}
complex operator +(complex ob)
{
complex t;
t.a=a+ob.a;
t.b=b+ob.b;
return t;
}
complex operator -(complex ob)
{
complex t;
t.a=a-ob.a;
t.b=b-ob.b;
return t;
}
void display()
{
cout<<a<<"+"<<b<<"i"<<"\n";
}
};
void main()
{
clrscr();
complex obj1,obj2,res,res1;
obj1.getvalue();
obj2.getvalue();
res=obj1+obj2;
res1=obj1-obj2;
cout<<"Input Values:";
obj1.display();
obj2.display();
cout<<"Result:";
res.display();
res1.display();
getch();
}