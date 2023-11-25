class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        std::vector<int> ret(nums.size(), 0);
        for(int i = 1; i < nums.size(); i++) {
            ret[0] += (nums[i]-nums[0]);
        }
        for(int j = 1;j<nums.size();j++)
            ret[j] = ret[j-1]+(nums[j]-nums[j-1])*j-(nums[j]-nums[j-1])*(nums.size()-j);
        
        return ret;
    }
};
