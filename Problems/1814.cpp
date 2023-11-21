class Solution {
public:

    int rev(int num) {
        int ret = 0;
        while(num > 0) {
            ret  = ret * 10 + num % 10;
            num /= 10;
        }
        return ret;
    }

    int countNicePairs(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++)
            nums[i] -= rev(nums[i]);

        std::sort(nums.begin(), nums.end());

        long ret = 0;
        long n = 1;

        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] == nums[i+1]) {
                n++;
            } else {
                ret = ((ret % 1000000007) + n*(n-1)/2) % 1000000007;
                n = 1;
            }
        }
        ret = (ret + n*(n-1)/2) % 1000000007;

        return (ret % 1000000007);

    }
};
