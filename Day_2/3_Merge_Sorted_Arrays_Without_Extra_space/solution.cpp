// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {   
        if(n == 0) return;
        for(int i = 0; i < m; i++){
            if(nums1[i] > nums2[0]){
                swap(nums1[i], nums2[0]);
                            
                int k = 0;
                while(k < n - 1 && nums2[k] > nums2[k + 1]){
                    swap(nums2[k], nums2[k + 1]);
                    k++;
                }
                
            }
        }
        
        int k = m;
        int p = 0;
        while(p < n && k < m + n){
            nums1[k] = nums2[p];
            k++;
            p++;
        }
    }
};