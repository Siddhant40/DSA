#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto it:strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(it);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
 
int main(){
 
return 0;
}
