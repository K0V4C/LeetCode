class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int move = 0;

        for(int i = 0; i < nums.size(); i++){
            if(!nums[i]) {
                move++;
            } else {
                nums[i-move] = nums[i];
            }
        }

        for(int i = nums.size() - 1; move ; move--, i--)
            nums[i] = 0;
        
    }
};