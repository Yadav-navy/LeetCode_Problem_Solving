class Solution {
public:

// using two pointer approch we are finding smaller element and putting it in new array in this question where no extra space required we will pick the biggest element and put that in last
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        if (m == 0){
            nums1= nums2;
        }
        else{
            while (j >= 0) {
            if (i>=0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        } }
        

    }
};