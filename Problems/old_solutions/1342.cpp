class Solution {
public:
    int numberOfSteps(int num) {
        unsigned int cnt = 0;
        while(num){
            cnt++;
            if(num%2)
                num -= 1;
            else
                num /= 2;
        }

        return cnt;
        
    }
};