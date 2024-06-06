class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    vector<int> arr_new(nums.size());
    int size = nums.size();
    while (k > size){
        k = k - size ; 
    }
        
    int j = size -1;
    int i = 0;
    int x = j-k+1;

    for(; i<k ; i++){
        cout << x << endl;
        arr_new[i] = nums[x]; 
        x++;   
        }

    // cout << i << endl;
    for (int n =0 ; n < (size-k); n++){
        arr_new[i] = nums[n];
        i++;
    }

    for (int i =0; i < size ; i++){
        cout << arr_new[i] << " ";
    }
        
    nums = arr_new;


        
    }
};