class Solution {
public:
    bool checkIfPangram(string sentence) {

        int alphabet[26] = {0};

        for(auto a: sentence)
            alphabet[a - 'a']++;

        for(auto a: alphabet)
            if(a == 0){
                std::cout << a;
                return false;
            }

        return true;
        
    }
};