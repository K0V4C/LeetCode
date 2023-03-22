class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int total_sum = nums.size() * (nums.size() + 1) / 2;

        for(auto c: nums)
            total_sum -= c;

        return total_sum;
        
    }
}; 