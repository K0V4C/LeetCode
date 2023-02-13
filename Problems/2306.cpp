// I would like to find a way and do it with a vec of vecs

class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
                
        long long answer = 0;

        std::unordered_set<std::string> first_letter_group[26];
        for(auto& elem: ideas)
            first_letter_group[elem[0] - 'a'].insert(elem.substr(1));

        for(int i = 0; i <25; i++){
            for(int j = i+1; j <= 25; j++){
                // find mutuals
                int temp = 0;
                for(auto& elem: first_letter_group[i]){
                    if(first_letter_group[j].count(elem))
                        temp++;
                }

                answer += (first_letter_group[i].size()-temp)*(first_letter_group[j].size() - temp);
            }
        }


        return 2*answer;
    }
};