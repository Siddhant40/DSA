#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    static bool cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }

    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for ( auto it:s) {
            mp[it]++ ;
        }

        vector<pair<char,int>>vec;
        for(auto it:mp){
            vec.push_back(it);
        }

        sort(vec.begin(),vec.end(),cmp);
        string ans="";
        for(auto it:vec){
            int k=it.second;
            while(k--){
              ans.push_back(it.first);  
            }
        }
        return ans;
    }
};
 
int main(){
 
return 0;
}
