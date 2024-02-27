#include<iostream>
using namespace std;

void isEven(int a) {
    if(a%2 == 0) {
        cout <<" Number is Even" <<endl;
    }
    else { 
        cout<< " Number is Odd" <<endl;
    }
}

int main() {
    
    int num;
    cin >> num;

    isEven(num);
}