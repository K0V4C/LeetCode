class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int* int_map = new int[nums.size() + 1]{0};

        for(int c : nums)
            int_map[c] = 1;

        std::vector<int> ret;
        for(int i = 1; i < nums.size() + 1; i++)
            if(!int_map[i])
                ret.push_back(i);

        delete[] int_map;
        return ret;
    }
};