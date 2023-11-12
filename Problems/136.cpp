class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int acc = 0;
        
        for(auto& c: nums)
            acc = acc ^ c;
    
        return acc;
    }
};