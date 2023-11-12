class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int right = nums.size();
        int left = 0;

        while( left < right ) {

            int mid = (right+left)/2;

            if(target < nums[mid]){
                right = mid;
            } else if (target > nums[mid]){
                left = mid+1;
            } else {
                return mid;
            }

        }

        return right;
        
    }
};