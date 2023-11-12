class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)
            return s;

        std::string answer;

        char matrix[numRows][s.size()];
        for(int i = 0; i < numRows; i++)
            for(int j = 0; j < s.size(); j++)
                matrix[i][j] = -1;
        
        for(int i =0,  value_exists = -1 , r = 0; i < s.size(); i++){
            matrix[r][i] = s[i];
            if(r == numRows - 1 || r == 0)
                value_exists *= -1;

            if(value_exists == 1){
                r += 1;
            } else {
                r -= 1;
            }
        }
            
        for(int i = 0; i < numRows;i++){
            for(int j = 0; j < s.size(); j++){
                if(matrix[i][j] != -1)
                    answer.push_back(matrix[i][j]);
            }
        }

        return answer;
    }
};