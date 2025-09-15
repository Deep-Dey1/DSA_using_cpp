#include<bits/stdc++.h>
using namespace std;
int main(){
    // Naive Brute force methode
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp;
        vector <int> v;
        for(int i = 0; i < n ; i++){
            cin >> temp;
            v.emplace_back(temp);
        }
        // applying the operation for once or never
        for(int i = 0 ; i < n -1 ; i++){
            if(v[i+1] < v[i]){
                int place = v[i+1];
                v[i+1] = v[i];
                v[i] = place;
                break;
            }
        }
        // finding if still the array is inconsistant
        int check = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            if(v[i+1] < v[i]){
                cout << "No" << endl;
                check = 1;
                break;
            }
        }
        if(check != 1){
            cout << "Yes" << endl;
        }

    }
    return 0;
}
