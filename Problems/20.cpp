class Solution {
public:
    bool isValid(string s) {
        int first = 0;
        int second = 0;
        int third = 0;

        for(auto elem: s){
            switch(elem){
                case '(':
                    first++; break;
                case ')':
                    first--; break;
                case '{':
                    second++; break;
                case '}':
                    second--; break;
                case '[':
                    third++; break;
                case ']':
                    third--; break;
            }
        }

        return first == 0 && second == 0 && third == 0;

    }
};