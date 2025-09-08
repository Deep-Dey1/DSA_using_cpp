// A basic Greeting program
#include<iostream>
using namespace std;
int main(){
    int age;
    string f_name , l_name;
    cout << "Hello There !" << endl;
    cout << "What's your name : ";
    cin >> f_name >> l_name;
    cout << "Hello " << f_name << " " << l_name << " , How old are you : ";
    cin >> age;
    cout << endl  << "#####################################################" << endl << endl ;
    cout << "Greetings !" << endl;
    cout << f_name << " " << l_name << " , of " << age << " years old !" << endl;
    cout << "Thanks for visiting the application." << endl; 
    return 0;
}