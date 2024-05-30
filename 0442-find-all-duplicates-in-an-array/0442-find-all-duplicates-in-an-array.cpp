class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        for (int i =0 ; i < nums.size() ; i++){
            int pos=abs(nums[i])-1;
            if (nums[pos]<0){
                ans.push_back(abs(nums[i]));
            }
            else{
                nums[pos]=-1*(nums[pos]);
            }
        }
        return ans;
        
    }
};