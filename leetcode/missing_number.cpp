class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = nums.size()*(nums.size()+1)/2;
        for(int n:nums) res-=n;
        return res;
    }
};
