#include<iostream>
using namespace std;

int main(){

        // prime
        
        cout << "Prime numbers between 1 and 100 are:" << endl;

        for (int a = 2; a < 100; a++) 
        {
                bool isPrime = true;

                for (int i = 2; i <= a/2; i++) 
                {
                        if (a % i == 0) 
                        {
                                isPrime = false;
                                // break;
                        }
                }

        if (isPrime) // true values only
        {
            cout << a << " ";
        }
        }
}