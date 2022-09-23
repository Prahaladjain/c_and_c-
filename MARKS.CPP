#include<iostream.h>
#include<conio.h>
void main()
{
int num;
clrscr();
cout<<"Enter no.";
cin>>num;
float *ptr;
ptr= new float[num];
cout<<"Enter marks",endl;
for(int i=0;i<num;i++)
{
cin>>*(ptr+i); //ptr[i];
}
cout<<"\n Dispaly Marks"<<endl;
for(i=0;i<num; i++)
{
cout<<*(ptr+i)<<endl;
}
getch();
}