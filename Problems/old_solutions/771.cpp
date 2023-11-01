class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        std::unordered_map<char, bool> map;

        for(auto c: jewels){
            map.insert({c, true});
        }
        int cnt = 0;
        for(auto c: stones){
            if(map.count(c))
                cnt++;
        }

        return cnt;
        
    }
};