class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> ans;
        sort(nums.begin(), nums.end()); 
        
        for (int i = 0 ; i+1 < nums.size();){
            
            if (nums[i] == nums[i+1]){
                if (i+2==(nums.size()-1)){
                        ans.push_back(nums[i+2]);
                    }
            i=i+2;
            
            }
            
            else if (nums[i] != nums[i+1]){
                ans.push_back(nums[i]);
                i=i+1;
                    if (i==(nums.size()-1)){
                        ans.push_back(nums[i]);
                    }
            }
            // cout << nums[i] << endl;
            
        }
    return ans;
        
    }
};