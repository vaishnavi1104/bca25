/* Slip no : 17_2 Create a class Distance which contains data members as: kilometer, meter. Write C++ program to perform following functions:
To accept a distance
To display a distance
To overload += operator to add two distances.
To overload > operator to compare two distances            */

#include<iostream.h>
#include<conio.h>
class distance
{
public:
int km,m;
void getdata()
{
cout<<"enter distance in kilometer\t";
cin>>km;
cout<<"enter distance in meters\t";
cin>>m;
}
void display()
{
cout<<"entered distance is\t";
cout<<km<<"."<<m;
cout<<endl;
}
void operator+=(distance d)
{
int kilometer=0,meter=0;
kilometer=km+d.km;
meter=m+d.m;
if(meter>=1000)
{
kilometer=km+d.km+(meter/1000);
meter=meter%1000;
}
cout<<"\naddition of two distances is\t"<<kilometer<<"."<<meter;
}
void operator>(distance d)
{
if(km>d.km)
{
cout<<"\ngreater distance is\t"<<km<<"."<<m;
}
else
{
cout<<"\ngreater distance is\t"<<d.km<<"."<<d.m;
}
}
};
void main()
{
clrscr();
                distance d,d1;
d.getdata();
d1.getdata();
d.display();
d1.display();
d+=d1;
d>d1;
getch();
}