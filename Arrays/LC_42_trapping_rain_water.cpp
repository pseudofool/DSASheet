// link - https://leetcode.com/problems/trapping-rain-water/
// tutorial - https://youtu.be/UZG3-vZlFM4
// time comlexity - O(n)
// space complexity - O(n)

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    leftMax[0] = height[0];
    for(int i=1; i<height.size(); i++){
        leftMax[i] = max(leftMax[i-1], height[i]);
    }
    rightMax[n-1] = height[n-1];
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], height[i]);
    }
    vector<int> storage(n);
    int output = 0;
    for(int i=0; i<n; i++){
        int water_level = min(rightMax[i], leftMax[i]);
        storage[i] = water_level - height[i];
        output += storage[i];
    }
    return output;
                        
}