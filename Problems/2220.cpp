class Solution {
public:
    int minBitFlips(int start, int goal) {
        int val = start ^ goal;
        int cnt = 0;
        for(; val > 0 ; val >>= 1)
            cnt += val & 1;
        return cnt;
    }
};