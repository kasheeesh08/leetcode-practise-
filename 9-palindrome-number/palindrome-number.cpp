class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long revNum = 0;

        if(x<0){
            return false;
        }

        while(x>0){
            int last_digit = x%10;
            revNum = (revNum*10) + last_digit;
            x = x/10;
        }
        return original == revNum;
    }
};