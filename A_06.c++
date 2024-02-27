#include<iostream>
using namespace std;

// // function to add two numbers  

// int add(int a, int b) {  
//     return a + b;  
// }  

// int main()
// {
//         int num1, num2, sum;  
//         cout << "Enter two numbers: ";  
//         cin >> num1 >> num2;  
  
//         // calling the add function and storing the result in sum  
//         sum = add(num1, num2);  
//         cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;  
//         // return 0;  
// }

// function of a to the power b  

// #include <cmath>

// int power(int a, int b) {  
//     return pow(a,b);  
// }  

int main()
{
        int x, y;  
        cout << "Enter two numbers: ";  
        cin >> x >> y;  
 
//         int result = power(x,y);  

//         cout << x << " to the power " << y << " is :" << result;      
// }

                              // OR
        int ans =1;
        for(int i=1;i<=y;i++){
                ans = ans * x;
        }
        cout << "power is = " << ans << endl;

}
