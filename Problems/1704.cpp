class Solution {
public:
    bool halvesAreAlike(string s) {
        if(s.size() % 2 == 1)
            return false;

        int cnt = 0;

        auto middle = s.size() / 2;

        for(int i = 0; i < middle; i++) {
            if(s[i] == 'a' or s[i] == 'A') {
                cnt += 1;
            } else  if(s[i] == 'e' or s[i] == 'E') {
                cnt += 1;
            } else  if(s[i] == 'i' or s[i] == 'I') {
                cnt += 1;
            } else  if(s[i] == 'o' or s[i] == 'O') {
                cnt += 1;
            } else  if(s[i] == 'u' or s[i] == 'U') {
                cnt += 1;
            }
        }

        for(int i = middle; i < s.size(); i++) {
            if(s[i] == 'a' or s[i] == 'A') {
                cnt -=1;
            } else  if(s[i] == 'e' or s[i] == 'E') {
                cnt -= 1;
            } else  if(s[i] == 'i' or s[i] == 'I') {
                cnt -= 1;
            } else  if(s[i] == 'o' or s[i] == 'O') {
                cnt -= 1;
            } else  if(s[i] == 'u' or s[i] == 'U') {
                cnt -= 1;
            }
        }

        return cnt == 0;
    }
};
