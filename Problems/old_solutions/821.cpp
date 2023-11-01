class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        std::vector<int> vals;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == c) {
                vals.push_back(0);
                continue;
            }

            int inc = 1;
            int before = i - inc >= 0 ? i - inc : 0;
            int after = i + inc < s.size() ? i + inc : s.size() - 1;

            while(before > 0 || after < s.size()){
                
                if(s[before] == c || s[after] == c){
                    vals.push_back(inc);
                    break;
                }

                inc++;
                before = i - inc >= 0 ? i - inc : 0;
                after = i + inc < s.size() ? i + inc : s.size() - 1;

            }

        }

        return vals;
    }
};