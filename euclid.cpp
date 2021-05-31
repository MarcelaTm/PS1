#include<iostream>
#include<stdio.h>
using namespace std;
euclid(int a,int b) // functia euclid
{
if (b==0) // daca b = 0
b = a; se scrie a
else
euclid(b,a%b);
} //end functia euclid
int main()
{
int a,b;
cout<<"Introduceti primul numar:";
cin>>a;
cout<<"Introduceti al doilea numar:";
cin>>b;
cout<<"Cmmdc este: "<<euclid(a,b)<<endl;
return 0 ;
}