class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        

        std::map<int,int> players;

        for(auto& pair : matches) {

            auto winner = pair[0];
            auto loser = pair[1];

            if(players.count(winner) == 0) {
                players[winner] = 0;
            }
            if (players.count(loser) == 0) {
                players[loser] = 1;
            }
            else if(players.count(loser) != 0) {
                players[loser] += 1;
            }
        }

        std::vector<std::vector<int>> ret(2);

        for(auto& x : players) {
            if (x.second == 0) {
                ret[0].push_back(x.first);
            } 

            else if (x.second == 1) {
                ret[1].push_back(x.first);
            }
        }


        return ret;

    }
};
