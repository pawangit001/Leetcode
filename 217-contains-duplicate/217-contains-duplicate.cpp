class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<long long>s(nums.begin(),nums.end());
        return nums.size()>s.size();
    }
};