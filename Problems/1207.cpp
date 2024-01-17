class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int,int> m;

        for(auto x : arr) {
            m[x]++;
        }

        std::unordered_set<int> s;

        for(auto& x : m) {
            if(auto iter = s.find(x.second); iter != s.end()) return false;
            s.insert(x.second);
        }

        return true;
    }
};
