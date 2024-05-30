class Solution {
public:
    bool isPowerOfTwo(int n) {
        double i =0 ;
        int x =0;

        while (i<=n){
            double num= pow(2,x);

            if (n==num){
                return true;
                break;
            }
            i=num;
            x++;
        }
        return false;
        
    }
    
};