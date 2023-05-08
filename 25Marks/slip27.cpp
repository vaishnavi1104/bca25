
/* Slip no : 27_2 Create a class MyString which contains a character pointer (Use new and delete operator). Write a C++ program to overload following operators:
 !     To change the case of each alphabet from given string
 [ ]     To print a character present at specified index    */


#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
class mystring
{
char *str;
int len;
public:
mystring()
{
}
mystring(char s[])
{
len=strlen(s);
str=new char[len+1];
strcpy(str,s);
}
void display()
{
cout<<"\nstring = "<<str;
}
void operator !()
{
int i;

for(i=0;str[i]!='\0';i++)
{
if(islower(str[i]))
{
str[i]=toupper(str[i]);
}
else
{
str[i]=tolower(str[i]);
}
}
}
char operator [](int &index)
{
 if(index>0 && index<len)
                return str[index];
else
                return '_';
}
};
void main()
{
clrscr();
int i;
char str[30];
cout<<"\n Enter string : ";
cin>>str;
mystring m(str);
m.display();
!m;
m.display();
cout<<"\n Enter index : ";
cin>>i;
char ch = m[i];
if(ch!='_')
cout<<"\n Chracter at given position "<<ch;
else
cout<<"\n Invalid index ";
getch();
}

Email This
BlogThis!
Share to Twitter
Share to Facebook
Share to Pinterest