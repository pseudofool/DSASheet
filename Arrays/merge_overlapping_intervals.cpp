// link - https://leetcode.com/problems/merge-intervals/
// tutorial - https://youtu.be/_FkR5zMwHQ0

/*
    Time complexity - (nlog n)
    Space complexity - O(1)
*/
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    vector<int> curr_int = intervals[0];
    for (int i = 1; i<intervals.size(); i++){
        if (curr_int[1] == intervals[i][0]-1){
            curr_int[1] = max(curr_int[1], intervals[i][1]);
        }else{
            ans.push_back(curr_int);
            curr_int = intervals[i];
        }
    }
    ans.push_back(curr_int);
    return ans;
}