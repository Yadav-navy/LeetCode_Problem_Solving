class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int size = nums.size();
        for (int j =0; j < size; j++){
            if (nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;       }
            }
        
        
    }};

        
//         int i = 0;
//         int j = i + 1;
//         int size = nums.size();
        
//         while ( j < size ){
//             if( nums [i] == 0 && nums[j] != 0 ){
//                 swap(nums[i],nums[j]);
//                 j++;
//                 i++;
//             }
//             else if (nums[i]==0 && nums[j]==0){
//                 j++;
//             }
//             else if (nums[i] !=0 && nums[j]!=0){
//                 i++;
//                 j++;
//             }
//             else if (nums[i] !=0 && nums[j]==0){
//                 i++;
//                 j++;
//             }
//         }
//     }
// };