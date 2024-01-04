class Solution {
public:
    int minOperations(vector<int>& nums) {

        // in case of empty vector
        if(nums.size() == 0)
            return 0;

        std::unordered_map<int, int> mp;

        for(auto& e : nums) {
            mp[e]++;
        }

        int result = 0;

        for(auto int_pair : mp) {

            // this is for the case i only one number is present
            const int value = int_pair.second;

            if(value <= 1)
                return -1; 

            const int res = value / 3;
            const int remainder = value % 3;
            
            if(remainder == 0) {

                // adding 3 res times
                result += res;

            } else {

                // this is two cases in one
                result += res + 1;
            }


        }

        return result;
    }
};
