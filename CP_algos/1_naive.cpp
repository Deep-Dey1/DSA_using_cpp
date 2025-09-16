#include<iostream>
using namespace std;
int isprime(int i){
    int check = 0;
    for(int j = 2; j < i ; j++){ // O(i)
        if(i % j == 0){
            check = 1;
            break;
        }
    }
    if(check == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int end;
    cout << "enter the upper limit : ";
    cin >> end;
    int num = 1;
    // overall : O(n root n) : or O(n square) : 
    for(int i = 2; i < end + 1 ; i++){ // O(n)
        if(isprime(i)){ // O(i)
            cout << "prime [ " << num << " ] : " << i << endl;
            num++; 
        }
    } 
    return 0;
}