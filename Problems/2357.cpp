class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        if(std::accumulate(nums.begin(),nums.end(), 0) == 0)
            return 0;

        bool not_all_zero = true;
        int cnt = 0;
        while(not_all_zero){
            cnt++;
            not_all_zero = false;

            int min = INT_MAX;
            for(auto e: nums)
                if(e != 0)
                    min = std::min(min, e);

            for(auto& e: nums) {
                e = e - min >= 0 ? e - min : 0 ;
                if(e != 0) not_all_zero = true;
            }
        }

        return cnt;
        
    }
};