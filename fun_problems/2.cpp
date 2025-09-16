#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    char temp ;
    int check = 0;
    for(int i = 0 ; i < strs[0].size() ; i++){
        temp = strs[0][i];
        for(int j = 1; j < strs.size(); j++){
            if(strs[j][i] != temp){
                check = 1;
                break;
            }
        }
        if(check == 0){
            result = result + temp;
        }
    }
    return result;
}
int main(){
    vector <string> v;
    int n;
    cout << "enter the number of words : ";
    cin >> n;
    cout << "enter the words : " << endl;
    for(int i = 0 ; i < n ; i++){
        string temp;
        cout << "enter the word [ " << i+1 << " ] : ";
        cin >> temp;
        v.emplace_back(temp);
    }
    cout << "The longest common prefix is : " << longestCommonPrefix(v) << endl;
    return 0;
}