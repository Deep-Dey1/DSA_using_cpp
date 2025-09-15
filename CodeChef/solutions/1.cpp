#include<bits/stdc++.h>
using namespace std;
int main(){
    // approach :
    // find the frequency of the I and Y 
    // if no I and no Y then NOT Sure
    // if atleast 1  I then Indian 
    // if atleast 1 Y then foreginer 
    int t;
    cin >> t;
    while(t--){
        int n;
        unordered_map <char, int> m;
        cin >> n;
        vector <char> s;
        char temp;
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            s.emplace_back(temp);
        }
        int check = 0;
        for(int i = 0 ; i < s.size() ; i++){
            m[s[i]] += 1;
            if(m['Y'] >= 1){
                cout << "Not Indian" << endl;
                check = 1;
                break;
            }
            if(m['I'] >= 1){
                cout << "Indian" << endl;
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "Not Sure" << endl;
        }
    } 
    return 0;
}