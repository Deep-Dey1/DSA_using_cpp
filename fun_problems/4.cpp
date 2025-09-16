#include<iostream>
#include<unordered_map>
using namespace std;

// // Navie Approach : O(n cube) :
// int lengthOfLongestSubstring(string s) {
//     if(s == "" || s == " "){
//         return s.size();
//     } 
//     int check = 0;
//     int max = 0;
//     int start;
//     int end;
//     for(int i = 0; i < s.size() - 1 ; i++){
//         for(int j = i ; j < s.size() ; j++){
//             check = 0 ;
//             unordered_map <char , int> m;
//             for(int k = i ; k <= j ; k++){
//                 m[s[k]] += 1;
//                 if(m[s[k]] > 1){
//                     check = 1;
//                     break;
//                 }
//             }
//             if(check == 0){
//                 if(max < (j-i +1)){
//                     max = j - i + 1;
//                     start = i;
//                     end = j;
//                 }
//             }
//         }
//     }
//     for(int i = start ; i <= end; i++){
//         cout << s[i];
//     }
//     cout << endl;
//     return max;
// }

// sliding window using hashmap approach : 
int lengthOfLongestSubstring(string s) {
    int max  = 0;
    int left = 0; 
    int right = 0;
    int to_print_left;
    int to_print_right;
    while(right < s.size()){
        int check = 0;
        unordered_map <char , int> m;
        for(int i = left ; i <= right ; i++){
            m[s[i]] += 1;
            if(m[s[i]] > 1){
                check = 1;
                left++;
                break;
            }
        }
        if(check == 0){
            if(max < right - left + 1){
                max = right - left + 1;
                to_print_left = left;
                to_print_right = right;
            }
            right++;
        }
    }
    for(int i = to_print_left ; i <= to_print_right ; i++){
        cout << s[i];
    }
    cout << endl;
    return max;
}
int main(){
    string s;
    cout << "enter the string : ";
    cin >> s;
    int length;
    cout << endl;
    cout << "Longest Substring without repeted characters is : ";
    length = lengthOfLongestSubstring(s);
    cout << "with length : " << length << endl;
    return 0;
}