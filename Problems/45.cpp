class Solution {
public:
    int jump(vector<int>& nums) {
        int score = 0;

        if(nums.size() == 1)
            return 0;

        for(int i = 0; i < nums.size()-1;){
            int max = -1;
            int jmp = -1;
            for(int j = 0;j < nums[i]; j++) {
                if((1+j+i) >= nums.size()-1){
                    jmp = nums.size();
                    break;
                }
                
                 if(nums[1+j+i] + j >= max){
                    max = nums[i+j+1] + j;  
                    jmp = i+j+1;
                 } 
            }

            i = jmp;

            ++score;
        }

        return score;

    }
};