class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;

        for(auto elem: s){
            switch(elem){
                case '(':
                    st.push('('); break;
                case '{':
                    st.push('{'); break;
                case '[':
                    st.push('['); break;
                case ')':
                    if(st.empty()) return false;
                    if(st.top() != '(') return false;
                    st.pop(); break;
                case '}':
                    if(st.empty()) return false;
                    if(st.top() != '{') return false;
                    st.pop(); break;
                case ']':
                    if(st.empty()) return false;
                    if(st.top() != '[') return false;
                    st.pop(); break;
            }
        }

        return st.empty();

    }
};