class Solution {
public:
    vector<int> evenOddBit(int n) {

        std::vector<int> bits(2);
        bool even = true;
        for(;n >0; n>>=1){
            if(n & 1 && even){
                bits[0]++;
            } else if (n & 1 && !even) {
                bits[1]++;
            }
            even = !even;
        }

        return bits;
        
    }
};