class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto size = nums.size();
        int ans = 0;
        for(int i = size - 1; i > 0; --i) {
            if(nums[i-1] != nums[i]) {
                ans += size - i;
            }
        }
        return ans;
    }
};
