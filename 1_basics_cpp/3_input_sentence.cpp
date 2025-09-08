// WAP to input a whole sentence in cpp and return this to the user 

#include<iostream>
using namespace std;
int main(){
    string text;
    cout << "Welcome !" << endl;
    cout << "User, this is a basic typewriter application." << endl;
    cout << "################################################################" << endl;
    cout << "You can enter your text here : ";
    getline(cin , text);
    cout << endl << "##################################################################" << endl;
    cout << "Your Text : " << endl ;
    cout << text;
    cout << endl; 
    return 0;
}