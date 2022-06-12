// link - https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1/#
// tutorial - https://youtu.be/GrV3MTR_Uk0
/*
    Brute Force:
    Time comlexity - O(n^2)
    Space complexity - O(2^n)
*/
/*
    optimal
    Time complexity - O(n) 
    Space Complexity - O(n)
*/

int longSubarrWthSumDivByK(int arr[], int n, int k)
{
    int len = 0;
    unordered_map<int,int> mp;
    int sum = 0;
    int rem = 0;
    mp.insert({rem,-1});
    for(int i=0; i<n; i++){
        sum += arr[i];
        rem = sum%k;
        if(rem<0){
            rem += k;
        }
        if(mp.count(rem)>0){
            int currLen = i-mp[rem];
            len = max(currLen, len);
        }else{
            mp.insert({rem,i});
        }
    }
    return len;
}