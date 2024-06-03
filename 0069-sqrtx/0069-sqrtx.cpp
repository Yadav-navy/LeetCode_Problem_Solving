// do it using Binary Search


class Solution {
public:
    long long int mySqrt(int x) {
        
        long long int sq;
        int s = 1;
        int e = x;
        long long int mid;
        long long int ans;
        
        if (x==0){
            return 0;
        }
        while (s <= e){
            mid = s + (e - s) / 2;
            sq = mid * mid;
            
            if (sq == x){
                return mid;
            }
            else if ( sq > x){
                e = mid -1 ;
            }
            else{
                ans = mid;
                s = mid +1 ;
            }
        }
    return ans;
    }
};