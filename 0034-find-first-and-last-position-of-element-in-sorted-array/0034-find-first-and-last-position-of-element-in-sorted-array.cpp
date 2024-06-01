class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    //for first occrence
        vector <int> ans;
        
        int start = 0;
        int end = nums.size() -1;
        int mid = (start)+(end-start) /2;
        int ans_first_occurence = -1;
            
        while (start <= end){
            mid = (start)+(end-start) /2;
            if (nums[mid]==target){
                ans_first_occurence = mid; //searching left side
                end = mid - 1;
            }
            else if (nums[mid] < target){
                start  = mid + 1;
            }
            else if (nums[mid] > target){
                end = mid -1;
            }
            
        }
        
        
        cout <<"First Occurence " <<ans_first_occurence << endl;
        
        // for last occurence
        
        start = 0;
        end = nums.size() -1;
        mid = (start)+(end-start) /2;
        int ans_last_occurence = -1;
            
        while (start <= end){
            mid = (start)+(end-start) /2;
            if (nums[mid]==target){
                ans_last_occurence = mid; //searching right side
                start = mid + 1;
            }
            else if (nums[mid] < target){
                start  = mid + 1;
            }
            else if (nums[mid] > target){
                end = mid -1;
            }
            
        }
        
        cout << "Last Occurence " << ans_last_occurence << endl;
        
        ans.push_back(ans_first_occurence);
        ans.push_back(ans_last_occurence);
        return ans;
        
    }
};