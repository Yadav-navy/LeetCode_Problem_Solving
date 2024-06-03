class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int n = nums.size()-1;
        int s = 0; 
        int e = n;
        int mid ;

        while (s<=e){
            mid = s +(e-s)/2;
            cout << mid << endl;
            if (nums[mid] == target ){
                return true;
            }
            // Checking which part is sorted  
            
            else if (nums[s] == nums[mid] && nums[mid] == nums[e]){
                s = s + 1;
                e =  e - 1;
            }
            
            else if (nums[s] <= nums[mid]){
                // left part sorted
                if (target >= nums[s] && target <= nums[mid]){
                    e = mid-1 ;
                }
                else{
                    s = mid + 1;
                }
            }
                     
            else if (nums[mid+1] <= nums[e] ){
                // right part is sorted
                if (target >= nums[mid+1] && target <= nums[e]){
                    s = mid +1;
                }
                else {
                    e = mid-1 ;
                }
            }
                     


        }
                     
    return false;
        
    }
};

