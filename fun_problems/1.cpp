#include<iostream>
#include<unordered_map>
using namespace std;
int romanToInt(string s) {
    unordered_map <char , int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int sum = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(m[s[i]] < m[s[i+1]] && (i != s.size() - 1)){
            sum = sum + m[s[i+1]] - m[s[i]];
            i++;
        }
        else{
            sum = sum + m[s[i]];
        }
    }
    return sum;
}
int main(){
    string num;
    cout << "Enter the input roman number : ";
    cin >> num;
    cout << "The integer respresentation of this roman number is : "<< romanToInt(num) << endl;;
    return 0;
}