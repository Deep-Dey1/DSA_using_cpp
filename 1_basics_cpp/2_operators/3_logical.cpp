#include<iostream>
using namespace std;
int main(){
    cout << "logical operator return true (1) or false (0)" << endl;
    cout << "any non zero number is true and 0 is false" << endl;
    cout << "-1 and 1 : (-1 && 1) = "<< (-1 && 1) << endl;
    cout << "-1 and 0 : (-1 && 0) = "<< (-1 && 0) << endl;
    cout << "10 and 0 : (10 && 0) = "<< (10 && 0) << endl;
    cout << "10 and 1 : (10 && 1) = "<< (10 && 1) << endl;
    cout << "-1 or 1 : (-1 && 1) = "<< (-1 || 1) << endl;
    cout << "-1 or 0 : (-1 && 0) = "<< (-1 || 0) << endl;
    cout << "10 or 0 : (10 && 0) = "<< (10 || 0) << endl;
    cout << "10 or 1 : (10 && 1) = "<< (10 || 1) << endl;
    cout << "not (-1) : !(-1) = " << !(-1) << endl;
    cout << "not (1) : !1 = "<< !1 << endl;
    cout << "not 0 : !0 = "<< !0 << endl;
    return 0;

    
}