class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int kar = 0;
        for(auto c: s)
            kar -= c;
        for(auto c: t)
            kar += c;

        return (char)kar;

    }
};