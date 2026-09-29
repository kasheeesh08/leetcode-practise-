class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> cp;
        if(s.length() != t.length()){
                return false;
        }
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i]) != mp.end()){
                if(mp[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                if(cp.find(t[i]) != cp.end()){
                    return false;
                }
            }
            mp[s[i]] = t[i];
            cp[t[i]] = s[i];
        }
        return true;
    }
};