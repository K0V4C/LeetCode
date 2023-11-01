class Solution {
public:
    bool isHappy(int n) {

        while(n > 9){
            int sum = 0;
            while(n > 0){
                sum += (n%10) * (n%10);
                n = n/10;
            }
            n = sum;
        }

        switch(n){
            case 1: 
                return true;
            case 7:
                return true;
            default:
                return false;
        }
        
    }
};