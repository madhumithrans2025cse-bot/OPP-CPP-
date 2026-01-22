#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    while(1)
    {

    cout<<endl<<"-------- MENU ---------"<<endl;
    cout<<"1.Buy Product"<<endl;
    cout<<"2.Sell product"<<endl;
    cout<<"3.calculate profit and loss"<<endl;
    cout<<"4.Exit"<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;


    switch (choice)
    {
    case 1:
        int add;
        cout<<"Enter the Buying cost of Product : ";
        cin>>add;
        buy += add;
        break;


    case 2:

        int del;
        cout<<"Enter the selling cost of Product : ";
        cin>>del;
        sell += del;
        break;

    case 3:
        cost = sell - buy;

        if(cost > 0)
        {
            cout<<"Your profit is : "<<cost<<endl;
        }
        else if(cost < 0)
        {
            cout<<"Your loss is : "<<cost<<endl;
        }
        else
            cout<<"No profit or loss"<<endl;
        break;

    case 4:
        return 0;

    default:
        cout<<"Invalid Input!"<<endl;
    }
    }
}
