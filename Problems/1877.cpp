
class Solution {
public:
    int minPairSum(std::vector<int>& nums) {
        int maxSum = INT_MIN;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;

        std::vector<int> frequency(100001, 0); 

        for (int num : nums) {
            frequency[num]++;
            minNum = std::min(minNum, num);
            maxNum = std::max(maxNum, num);
        }

        int low = minNum;
        int high = maxNum;

        while (low <= high) {
            if (frequency[low] == 0) {
                low++;
            }
            else if (frequency[high] == 0) {
                high--;
            }
            else {
                int currentPairSum = low + high;
                maxSum = std::max(maxSum, currentPairSum);
                frequency[low]--;
                frequency[high]--;
            }
        }

        return maxSum; 
    }
};
