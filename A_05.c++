#include <iostream>
using namespace std;

int main()
{
        // switch 

        int a = 11;
        int day = 4;

        switch (day)
        {
        case 1:
                cout << "Monday";
                break;
        case 2:
                cout << "Tuesday";
                break;
        case 3:
                cout << "Wednesday";
                break;
        case 4:switch (a)
                {
                        case 1:
                        cout << "hi_1" << endl;
                        break;

                        case 11:
                        cout << "hi_11" << endl;
                        break;
                }
                cout << "Thursday";
                break;

        default:
                cout << "Error" << endl;
        }
}