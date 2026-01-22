#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,choice;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"1.Addition\n2.Sutraction\n3.Multiplication\n4.Division\n5.Modularity"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b;
            break;

        case 2:
            cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
            break;

        case 3:
            cout<<"multiplecation of "<<a<<" and "<<b<<" is "<<a*b;
            break;

        case 4:
            cout<<"division of "<<a<<" and "<<b<<" is "<<a/b;
            break;

        case 5:
            cout<<"modularity of "<<a<<" and "<<b<<" is "<<a%b;
            break;

        default:
            cout<<"Invalid choice";
    }
    return 0;
}
