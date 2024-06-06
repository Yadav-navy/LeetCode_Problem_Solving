class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        int j = i+1;
        int size = nums.size();
        
        if (size == 1){
            return true;
        }
        
        int count = 0;
        while (j<size){
            if (nums[i] <= nums[j]){  // inc
                i++;
                j++;
                continue;
            }
            count = count + 1;
            cout << count << endl;
            
            if (nums[i] >= nums[j]){
                i++;
                j++;}

        }

        
        if (count == 0){
            return true;
        }
            
        if (count == 1 && nums[size-1]<=nums[0]){
            return true;
        } 
        
        return false;
        
        }
};