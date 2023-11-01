class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string temp = "";
        if(!strs[0].size())
                return "";

        for(int i = 0; i < strs[0].size(); i++){
            bool flag = 1;

            for(auto elem : strs){
                if(strs[0][i] != elem[i]){ 
                    flag = 0;
                }
            }

            if(!flag)
                break;

            temp += strs[0][i];
        }

        return temp;
    }
};