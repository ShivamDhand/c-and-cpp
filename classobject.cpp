#include<iostream>
using namespace std;
class circle
{
int r;
public:
double peri(int);
};
double circle::peri(int radius)
{
r=radius;
return(2*3.14*r);
}
int main()
{
circle cir;
cout<<"\nPerimeter of the circle is"<<cir.peri(4)<<endl;
return 0;
}