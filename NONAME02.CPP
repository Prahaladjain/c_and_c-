#include<iostream.h>
#include<conio.h>
class vehicle
{
public:
vehicle()
{
cout<<"This is a vehicle"<<endl;
}
};
class fourwheeler:public vehicle
{
public:
fourwheeler()
{
cout<<"fourwheeler are vehicles"<<endl;
}
};
class car:public fourwheeler
{
public:
car()
{
cout<<"Car is a fourwheeler"<<endl;
}
};
void main()
{
clrscr();
car obj;
getch();
}















