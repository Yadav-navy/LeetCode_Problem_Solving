class Solution {
private:
    void solve(vector<int> nums, int index, vector<vector<int>>& ans ){
        if (index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index; i< nums.size(); i++ ){
            swap(nums[index],nums[i]);
            solve(nums, index + 1, ans);
            swap(nums[i],nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        if (nums.size()==0){
            return ans;
        }
        int index = 0;
        solve(nums, index, ans);
        return ans;
        
    }
};