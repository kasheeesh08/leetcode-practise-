class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j =s.size()-1;

        while(i<j){
            // skip non-alphanumeric
            if(!isalnum(s[i])){
                i++;
                continue;
            }

            if(!isalnum(s[j])){
                j--;
                continue;
            }
            //convert every character to lowercase
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};