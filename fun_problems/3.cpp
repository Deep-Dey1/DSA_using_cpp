#include <iostream>
using namespace std;
int main() {
    int n  ;
    cout << "enter the integer : ";
    cin >> n ;
    int pos = 1;
    int count = 0 ;
    while(n != 0){
        if((n & 1) != 0){
            count++;
        }
        n = n >> 1;
    }
    cout << "There are [ " << count << " ] 1's in its binary representation." << endl;
    return 0;
}
