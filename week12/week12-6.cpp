//week12-6.cpp
//Leetcode 1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N);
        for(int i=0;i<N;i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};
