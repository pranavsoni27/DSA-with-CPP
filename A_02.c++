#include<iostream>
using namespace std;

int main(){

        /* datatypes, variables, operators */

        int a = 1;
        cout << a << endl;

        float b = 1.11;
        cout << b << endl;

        char c = 'a';
        cout << c << endl;

        /* true = 1, false = 0*/
        bool d = true;
        cout << "True ki value = " << d << endl;
        bool d1 = false;
        cout << "False ki value = " << d1 << endl;

        double e = 1.11;
        cout << e << endl;
        cout << "size of e = " << sizeof(e) << endl;

        /* TypeCasting */

        char ch = 98;
        cout << ch << endl;

        float num = 5.25;  
        int x;  
        x = int(num); 
        cout << x << endl;

        /* Relational operators*/

        int a1 = 1;
        int a2 = 2;

        bool b1 = (a1 == a2);
        cout << b1 << endl;

        bool b2 = (a1 > a2);
        cout << b2 << endl;

        bool b3 = (a1 < a2);
        cout << b3 << endl;

        bool b4 = (a1 >= a2);
        cout << b4 << endl;

        bool b5 = (a1 <= a2);
        cout << b5 << endl;

        bool b6 = (a1 != a2);
        cout << b6 << endl;

        /* Arithmetic operators*/

        int x1 = 4;
        int x2 = 2;

        cout << x1+x2 << endl;
        cout << x1-x2 << endl;
        cout << x1*x2 << endl;
        cout << x1/x2 << endl;

        cout << x1%x2 << endl;
}