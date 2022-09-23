#include<iostream.h>
#include<conio.h>
class shape
{
public:
int width;
int height;
public:
virtual int getarea()=0;
void setwidth(int w)
{
 width=w;
}
void setheight(int h)
{
height=h;
}
};
class Rectangle:public shape
{
public:
int gerarea()
{
return(width*height);
}
};
class triangle:public shape
{
public:
int getarea()
{
return(width*height)/2;
}
};
void main()
{
clrscr();
Rectangle r;


triangle t;
r.setwidth(5);
r.setheight(7);
cout<<"Rectangle Area"<<r.getarea()<<endl;
t.setwidth(4);
t.setheight(7);
cout<<"Triangle Area"<<t.getarea()<<endl;
getch();
}
