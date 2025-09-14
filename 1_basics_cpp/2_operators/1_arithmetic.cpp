#include<iostream>
using namespace std;
int main (){
    int a  = 10 , b = 3;
    cout << "Add two numbers : (a + b) = " << a + b << endl;
    cout << "Subtract b from a : (a - b) = " << a - b << endl;
    cout << "Multiply two numbers : (a * b) = " << a * b << endl;
    cout << "Divide a by b : (a / b) = " << a / b << endl;
    cout << "Reminder on dividing a by b : (a % b should only used with integers and not floats) = " << a % b << endl; 
    cout << "Increment a by 1 and print the incremented value : (++a) = " << ++a << endl;
    cout << "Increment a by 1 but print the previous value of a : (a++) = " << a++ << endl;
    cout << "Decrement b by 1 and print the Decremented value : (--b) = " << --b << endl;
    cout << "Decrement b by 1 but print the previous value of b : (b--) = " << b-- << endl;
    return 0;
}