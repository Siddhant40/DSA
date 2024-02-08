#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char,int>mp;
        // for(auto it:s){
        //     mp[it]++;
        // }
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(arr[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
 
int main(){
 
return 0;
}
