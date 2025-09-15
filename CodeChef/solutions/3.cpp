#include<iostream>
using namespace std;
int isprime(long long int i){
    int check = 0;
    for(long long int j = 2; j < (i/2 + 1); j++){
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
    int t;
    cin >> t;
    while(t--){
        long long int m , n;
        cin >> m >> n ;  
        for(long long int i = m ; i <= n ; i++){
            // now check if i is prime or not
            // then print i if i is prime
            if(isprime(i)){
                cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}