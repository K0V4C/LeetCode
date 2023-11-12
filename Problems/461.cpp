class Solution {
public:
    int hammingDistance(int x, int y) {

        int val = x ^ y;
        int bits = 0;
        while(val > 0){
            bits+= val & 1;
            val >>= 1;
        }
        return bits;
    }
};