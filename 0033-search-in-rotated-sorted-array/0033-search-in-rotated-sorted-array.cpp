class Solution {
public:
    
    int BinarySearch(vector<int>& nums , int target, int start , int end){
        int ans;
        
        int s = start;
        int e = end;
        int mid;
        
        while (s <= e){
            mid = s + (e - s) / 2;
            if (nums[mid] == target){
                return mid ;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
             
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {

        // First to find pivot element ;
        // pivot element means that where we can divide the whole array into two fully                  sorted array
        int ans ;
        int s = 0;
        int e = nums.size() - 1;
        int mid;
        int pivot = -1;
        while (s<e){
            mid = s + (e - s) / 2;
            if ( nums[mid] > nums[e]){
                s = mid + 1;
                
            }
            else if (nums[mid] <= nums[e]){
                e = mid;                // can be the answer where the comes
                cout<< "value of e" << e << endl;
            }
            
        }
        pivot = s;
        
        cout << "pivot element is "<< pivot<< target << endl;
        if (target >= nums[pivot] && target <= nums[nums.size()-1]  ){
            cout << "inside if" << endl;
            ans = BinarySearch(nums , target, pivot , nums.size()-1);
        
        }
        
        else {
            cout << "inside else" << endl;
            
            ans = BinarySearch(nums , target ,0 ,pivot -1);
            
        }
        return ans;
    }
};