class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 1;

        for(int i = digits.size() - 1; i >= 0; i--){
            bool change = digits[i] == 9;
            digits[i] = (digits[i] + carry ) % 10;
            carry = !digits[i] && change ? 1 : 0 ;
        }

        if(carry)
            digits.insert(digits.begin(), 1);


        return digits;
    }
};
