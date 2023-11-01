class Solution {
public:
    char repeatedCharacter(string s) {

        std::unordered_set<char> set;
        char ret;
        for(char c: s){
            if(set.count(c)) {
                ret = c;
                break;
            }
            set.insert(c);
        }

        return ret;
    }
};