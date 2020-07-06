#include<iostream>
using namespace std;
class statex
{
int x;
public:
static int dec;
statex()
{
x=dec--;
}
static void stat()
{
cout<<"Now static var dec is"<<dec<<endl;
}
void number()
{
cout<<"Number is :"<<x<<endl;
}
};

int statex::dec;
int main()
{
statex o1,o2,o3,o4;
o1.number();
o2.number();
o3.number();
o4.number();
statex::stat();
return 0;
}