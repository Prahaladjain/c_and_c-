#include<iostream.h>
#include<conio.h>
class shape
{
protected:
int w;
int h;
public:
void setw(int w1)
{
w=w1;
}
void seth(int h1)
{
h=h1;
}
};
class reactangle:public shape
{
public:
int getarea()
{
return(w*h);
}
};
void main()
{
clrscr();
reactangle r;
r.setw(5);
r.seth(7);
cout<<"Total Area:"<<r.getarea()<<"cm^2"<<endl;
getch();
}