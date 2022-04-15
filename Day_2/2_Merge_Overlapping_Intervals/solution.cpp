// https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        sort(intervals.begin(), intervals.end());
        vector<int> curr_interval(2);
        curr_interval[0] = intervals[0][0];
        curr_interval[1] = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= curr_interval[1]) {    // overlaping condition
                curr_interval[0] = min(curr_interval[0], intervals[i][0]);
                curr_interval[1] = max(curr_interval[1], intervals[i][1]);
            }else{
                ans.push_back(curr_interval);
                curr_interval[0] = intervals[i][0];
                curr_interval[1] = intervals[i][1];
            }
        }
        ans.push_back(curr_interval);       // append the last interval
    return ans;
    }
};