class Solution {
public:
    int countAsterisks(string s) {
        
        bool ignore = true;
        int cnt = 0;
        for(char e: s){
            if(e == '|')
                ignore = !ignore;
            
            if(e == '*' && ignore)
                cnt++;
        }
        
        return cnt;
    }
};