//link - https://leetcode.com/problems/maximum-subarray/
// aka kandane's algo
// tutorial - https://youtu.be/VMtyGnNcdPw
/*
    Time complexity - O(n)
    Space complexity - O(1)
*/
int maxSubArray(vector<int>& nums) {
    int csum = nums[0];
    int osum = nums[0];
    for (int i=1; i<nums.size(); i++){
        if (csum >= 0){
            csum += nums[i];
        }else{
            csum = nums[i];
        }
        if (csum > osum)
            osum = csum;
    }
    return osum;
}