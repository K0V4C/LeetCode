class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int map[26] = {0};

        for(auto e: chars) {
            map[e - 'a'] += 1;
        }

        int sum = 0;

        for(auto& word : words) {

            int t_map[26] = {0};
            for(auto e : word) {
                t_map[e - 'a'] += 1;
            }

            bool flag = true;
            for(int i = 0 ; i < 26; i ++) {
                if(map[i] < t_map[i]) flag = false;
            }

            if (flag) sum += word.size();
        }
        return sum;

    }
};
