#include <unordered_set>
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        std::unordered_set<int> my_set;
        int max_val = -1;

        for(auto& e : nums) {
            auto i = stoi(e, nullptr, 2);
            my_set.insert(i);
            if (max_val < i)
                max_val = i;
        }



        int val = -1;
        for(int i = 0; i <= max_val + 1; i++) {
            if (auto iter = my_set.find(i); iter == my_set.end()) {
                val = i;
                break;
            }
        }

        std::string ret;

        char mini_map[] = {'0', '1'};

        while(val != 0) {

            auto reminder = val % 2;
            val = val / 2;

            ret.insert(0,1,mini_map[reminder]);
        }

        for(int i = ret.size(); i < nums.size(); i++)
            ret.insert(0,1,'0');


        return ret;
    }
};
