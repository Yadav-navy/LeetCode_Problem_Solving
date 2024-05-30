class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            if (n&1){
                count+=1;
            }
            n >>= 1; // Right shift to check the next bit
        }
        return count;
    }
    
};

// we dont need to convert it into binary and then solve we can do this by directly using and bitwise operator