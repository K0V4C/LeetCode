class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        

        std::string s1;
        std::string s2;

        for(auto &e : word1) {
            s1+=e;
        }

        for(auto &e : word2) {
            s2+=e;
        }

        return (s1==s2);

    }
};
