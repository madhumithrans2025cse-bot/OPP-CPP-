#include <iostream>
using namespace std;

int main()
{
    cout<<setfill('*')<<setw(10)<<""<<" Age Calculator! "<<setw(10)<<""<<endl<<endl;

    int d1,m1,y1,d2,m2,y2,day1,day2,diff;
    cout<<"Enter DOB of person 1 : ";
    cin>>d1>>m1>>y1;
    cout<<"Enter DOB of person 2 : ";
    cin>>d2>>m2>>y2;
    day1=y1*365+m1*30+d1;
    day2=y2*365+m2*30+d2;
    diff=day1-day2;
    if(diff<0)
    diff=-(diff);
    cout<<"The age difference is "<<diff/365<<" years";
    return 0;
}
