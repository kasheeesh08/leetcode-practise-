class Solution {
public:
    double myPow(double x, int n) {

        //edge case : converting negative into positive will lead to overflow that is why we will take long long 

        double ans = 1.0;
        long long dup_n = n;
        if(dup_n < 0)
            dup_n = -1*dup_n;

        //logic for positive num as power 
        while(dup_n){
            //even number as power
            if(dup_n%2 == 0){
                x = x*x;
                dup_n = dup_n/2;
            }
            //odd number as power
            else{
                ans = ans*x;
                dup_n = dup_n -1;
            }
        }
        //logic for negative num as power 
        if(n < 0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
    
};