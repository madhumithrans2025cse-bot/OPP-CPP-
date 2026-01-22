#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string trf;

    cout << setfill('*') << setw(10) << ""
         << " Welcome to Traffic Simulation System! "
         << setw(10) << "" << endl << endl;

    cout << "Enter Light color : ";
    cin >> trf;

    if (trf == "RED")
    {
        cout << "STOP";
    }
    else if (trf == "GREEN")
    {
        cout << "GO";
    }
    else if (trf == "YELLOW")
    {
        cout << "SLOW DOWN";
    }
    else
    {
        cout << "Invalid color";
    }

    return 0;
}

