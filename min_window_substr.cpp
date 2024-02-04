#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) {
            return "";
        }
        int start=0,end=0;
        unordered_map<char,int>tstr;
        unordered_map<char,int>map;
        for(auto it:t){
            tstr[it]++;
        }
        int count=tstr.size();
        int formed=0;
        int min_len=INT_MAX;
        string min_str="";
         int ans[3] = { -1, 0, 0 };
        while(end<s.length()){
            char c=s[end];
            map[c]++;
            if(tstr.find(c)!=tstr.end() and map[c]==tstr[c]){
                formed++;
            }
            while(start<=end and formed==count){
                // if(min_len>end-start+1){
                //     min_len=end-start+1;
                //     min_str=s.substr(start,min_len);
                // }
                 if (ans[0] == -1 || end - start + 1 < ans[0]) {
                    ans[0] = end - start + 1;
                    ans[1] = start;
                    ans[2] = end;
                }
           
                map[s[start]]--;
                if(tstr.find(s[start])!=tstr.end() and map[s[start]]<tstr[s[start]]){
                    formed--;
                }
                start++;
            }
            end++;
        }
        // return min_str;
        return ans[0] == -1 ? "" : s.substr(ans[1], ans[0]);
    }
};




int main(){
 
return 0;
}
