#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three sides of a triangle : ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<a<<","<<b<<" "<<"and "<<c<<" Forms a Valid Triangle";
    }
    else
    {
        cout<<a<<","<<b<<"m"<<"and "<<c<<" Does not forms a Valid Triangle";
    }
    return 0;
}
