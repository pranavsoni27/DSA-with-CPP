#include<iostream>
using namespace std;

int main(){

        /* User input */

        // int a;
        // cout << "Enter age = ";
        // cin >> a;

        // int x,y;
        // cin >> x >> y;
        // cout << "value of x = " << x << " , and value of y = " << y << endl;

        //  if - else 

        // if(a>=18){
        //         cout << "Eligible for vote";
        // }else{
        //         cout << "Not eligible";
        // }

        // to print ascii values

        // int a;
        // a = cin.get();
        // cout << "value of a = " << a << endl;

        //  if - else - if

        // int a;
        // cin >> a;

        // if(a>0){
        //         cout << a << " is positive. ";
        // }else if (a<0)
        // {
        //         cout << a << " is negetive. ";
        // }else{
        //         cout << a << " is zero. ";
        // }

        // while

        // int a = 1;

        // while(a <= 10){
        //         cout << a << ". Hi" << endl;
        //         a++;
        // }

        // sum of n numbers

        // int a;
        // cout << "Enter value = ";
        // cin >> a;

        // int i = 1;
        // int sum = 0;

        // while(i <= a){
        //         sum = sum + i;
        //         i++;
        // }
        // cout <<  "value of sum is = " << sum;

        // prime

        int a;
        cin >> a;

        int i = 2;

        while(i < a){
                if(a%i == 0){
                        cout << "Not prime for " << i << endl;
                }else{
                        cout << "Prime for " << i << endl;
                }
                i++;
        }

}