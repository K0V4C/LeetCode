class Solution {
public:
    bool isPalindrome(string s) {
        std::string valid = "";


        for(int i = 0; i < s.size(); i++ ){

            if(isalnum(s[i])){
                valid += tolower(s[i]);
            } 
        }

        for(int i = 0; i < valid.size() / 2; i++){
            if (valid[i] != valid[valid.size() - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};
