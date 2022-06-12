// link - https://leetcode.com/problems/two-sum/
// tutorial - https://youtu.be/l5Ruk_Ub8B4

/*
    Time complexity - O(nlog n)
    Space complexity - O(1)
*/
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> output, store;
    store = nums;
    sort(store.begin(), store.end());
    int i=0, j = nums.size()-1;
    int n1, n2;
    while(i<j){
        // cout << i << " " << j << endl;
        int sum = store[i] + store[j];
        if(sum > target){
            j--;
        }else if(sum < target){
            i++;
        }else{
            n1 = store[i];
            n2 = store[j];
            break;
        }
    }
    // finding indices
    for(int k=0; k<nums.size(); k++){
        if(nums[k] == n1){
            output.push_back(k);
        }else if(nums[k] == n2){
            output.push_back(k);
        }
    }
    return output;
}