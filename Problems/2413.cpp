class Solution {
public:
    int smallestEvenMultiple(int n) {

        int num = 2;
        int val = n;
        while(true){
            if(num < val) {
                num += 2;
            } else if (val < num) {
                val += n;
            } else {
                break;
            }
        }

        return num;
        
    }
};