// link - https://leetcode.com/problems/container-with-most-water/
// tutorial - https://youtu.be/qUDp8IUbZto

/*
    Time complexity - O(n)
    Space complexity - O(1)
*/

int maxArea(vector<int>& height) {
    int i=0;
    int j=height.size()-1;
    int water = 0;
    while(i<j){
        int h = j-i;
        int w = min(height[j],height[i]);
        int currWater = h*w;
        water = max(water, currWater);
        if(height[i]<height[j])
            i++;
        else
            j--;
    }
    return water;
}