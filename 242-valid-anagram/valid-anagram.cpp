class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if(s.length() != t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            //we are doing this so that answer will be 0 if freq of character in the strings are  equal
            mp[s[i]]++;
            mp[t[i]]--; 
        }
        for(auto x : mp){
            if(x.second != 0){
                return false;
            }
        }
        return true;
    }
};