// Sieve Of Eratosthene's : finding the first n primes in O(nloglogn) :
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int end;
    cout << "enter the upper limit : ";
    cin >>  end;
    cout << "the following are the prims till " << end << " : ";
    cout << endl;
    int num = 1;
    
    // precomputation to create the black box : 
    vector <int> black_box(end + 1 , 1); // a vector of end elements with every element assigned 1
    // assign all the non prime elements as 0 and prime elements as 1
    black_box[0] = 0;
    black_box[1] = 0;
    // start itterating from left most side and the if found any index which has value 1 then that index is a prime number
    // now in the vector assign 0 to all the indices which are multiple of that prime number.
    // and continue

    // creating the black_box : O(nloglogn) {its a prime harmonic series}
    for(int i = 0 ; i < end + 1; i++){
        if(black_box[i] == 1){
            //for(int j = i*2 ; j < end + 1 ; j += i){ this is the nive approach to assign the 0 to the multiples of the prime 
            for(int j = i*i ; j < end + 1; j += i){ // this is a bit optimal approach to assign the 0 to the multiple here j dont start with 2*i insted i*i preventing the repetation of already 0 alloted places
                black_box[j] = 0;
            }
        }
    }  

    // O(n) :
    for(int i = 2; i <= end; i++){ // O(n)
        if(black_box[i]){ // O(1)
            cout << "prime [ " << num << " ] : " << i << endl;
            num++;
        }
    }
    return 0;
}