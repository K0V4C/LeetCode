class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int char_map[26] = {0};

        for(auto c : magazine)
            char_map[c - 'a'] += 1;
        

        for(auto c : ransomNote)
            if(!char_map[c - 'a']) 
                return false;
            else
                char_map[c - 'a']--;
        
        return true;
        
    }
};