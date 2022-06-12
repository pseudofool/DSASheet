// link - https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1/#
// tutorial - https://youtu.be/VV_KPrG_PzE
/*
    Time complexity - O(nlogn)
    Space complexity - O(1)
*/
static bool should_swap(string a, string b){
    return a+b < b+a;
    // string s1 = a+b;
    // string s2 = b+a;
    // long long n1 = stoi(s1);
    // long long n2 = stoi(s2);
    // if(n1 > n2) return false;
    // else return true;
}
string printLargest(vector<string> &arr) {
    sort(arr.begin(), arr.end(),should_swap);
    string ans;
    for(int i=arr.size()-1; i>=0; i--){
        ans += arr[i];
    }
    return ans;
}