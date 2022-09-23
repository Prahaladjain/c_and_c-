 #include<iostream.h>
 #include<conio.h>
 class Baseclass
 {
 public:
 virtual void display1()=0;
 virtual void display2()=0;
 virtual void display3()
 {
 cout<<"\n\t This is display3() method of Baseclass";
 }
 };
 class Derivedclass:public Baseclass
 {
 public:

 void display1()
 {
 cout<<"\n\t This is display1() method od Derivedclass";
 }
 };
 void display2()
 {
 cout<<"\n\t This is display2() method of Derivedclass";
 }

 void main()
 {
 derived display.D
 D.display1();
 D.display2();
 D.display3();
 getch();
 }