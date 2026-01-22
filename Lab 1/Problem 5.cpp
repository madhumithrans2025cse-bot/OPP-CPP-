#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double bill = 0;

    cout << "Enter Units : ";
    cin >> units;

    if (units <= 100)
    {
        cout << "Free units, you need not pay!" << endl;
    }
    else if (units > 100 && units <= 200)
    {
        bill = (units - 100) * 2.5;
        cout << "You need to pay " << bill << endl;
    }
    else
    {
        bill = (100 * 2.5) + (units - 200) * 3.5;
        cout << "You need to pay " << bill << endl;
    }

    return 0;
}
