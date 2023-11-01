class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0)
            return 0;

        int len = 0;
        bool first_char = false;

        for(int i = s.size() - 1; i >= 0; i--) {

            if(first_char == true and s[i] == ' ')
                return len;

            if(s[i] !=  ' ')
                first_char = true;

            if(first_char)
                len++;
        }

        return len;
    }
};
