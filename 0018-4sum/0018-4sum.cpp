class Solution { // 64 ms, faster than 65.74%
public:
   // vector<vector<int>> ans;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        // kSum(nums, target, 4);
        // return ans;
           sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n-3; ++i) {
            for (int j = i + 1; j < n-2; ++j) {
                int l = j + 1, r = n - 1;
           long long     int remain = (long long)target - nums[i] - nums[j];
                while (l < r) {
                    if ((long long)(nums[l] + nums[r])== remain) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        ++l; --r;
                        while (l < r && nums[l-1] == nums[l]) ++l; // Skip duplicate nums[l]
                    } else if ((long long)(nums[l] + nums[r]) > remain) {
                        --r;
                    } else {
                        ++l;
                    }
                }
                while (j+1 < n && nums[j] == nums[j+1]) ++j; // Skip duplicate nums[j]
            }
            while (i+1 < n && nums[i] == nums[i+1]) ++i; // Skip duplicate nums[i]
        }
        return ans;
    }
//     void kSum(vector<int>& nums, int target, int k) {
//         vector<int> tmp;
//         dfs(nums, 0, (int)nums.size() - 1, k, target, tmp);
//     }
//     void dfs(vector<int>& nums, int l, int r, int k, int target, vector<int>& path) {
//         long long avg=target/k;
//         if(nums[l]>avg or nums[r]<avg)return;
//         if((target<0 and nums[l]>0 )or target>0 and nums[r]<0 )return;
//         if (k == 2) {
//             while (l < r) {
//                 if((target<0 and nums[l]>0 )or target>0 and nums[r]<0 )return;
//                 if (nums[l] + nums[r] == target) {
//                     path.push_back(nums[l]);
//                     path.push_back(nums[r]);
//                     ans.push_back(path);
//                     path.pop_back();
//                     path.pop_back();
//                     while (l+1 < r && nums[l] == nums[l+1]) ++l; // Skip duplicate nums[l]
//                     ++l; --r;
//                 } else if (nums[l] + nums[r] > target) {
//                     --r; // Decrease sum
//                 } else {
//                     ++l; // Increase sum
//                 }
//             }
//         }
//         while (l < r) {
            
//             path.push_back(nums[l]);
//             dfs(nums, l+1, r, k-1,static_cast<long long> (target)-nums[l], path);
//             path.pop_back();
//             while (l+1 < r && nums[l] == nums[l+1]) ++l; // Skip duplicate nums[l]
//             ++l;
//         }
//     }
};