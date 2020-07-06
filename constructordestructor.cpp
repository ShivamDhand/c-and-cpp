#include<iostream>
using namespace std;
class Division
{
double a,b;
public:
Division(double,double);
double divide()
{
return(a/b);
}
};
Division::Division(double x,double y)
{
a=x;
b=y;
}
int main()
{
Division obj (77,57);
cout<<"\nResult after division is "<<obj.divide()<<endl;
return 0;
}