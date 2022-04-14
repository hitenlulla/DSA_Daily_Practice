// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int final_max = nums[0];
        int curr_max = nums[0];
        for(int i = 1; i < nums.size(); i++){
            curr_max = max(curr_max + nums[i], nums[i]);
            final_max = max(curr_max, final_max);
        }
        return final_max;
    }
};