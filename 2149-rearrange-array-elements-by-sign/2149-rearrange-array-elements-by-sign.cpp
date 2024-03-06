class Solution {
public:
    std::vector<int> rearrangeArray(std::vector<int>& nums) {
        std::vector<int> ans(nums.size(), 0);
        int i = 0, j = 1;
        for (int k = 0; k < nums.size(); ++k) {
            if (nums[k] > 0) {
                ans[i] = nums[k];
                i += 2;
            } else {
                ans[j] = nums[k];
                j += 2;
            }
        }
        return ans;
    }
};