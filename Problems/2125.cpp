class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        std::vector<int> bank_cnt;


        for(auto& row : bank) {
            int cnt = 0;
            for(auto x : row) {
                if (x == '1')
                    cnt += 1;
            }

            if(cnt != 0)
                bank_cnt.push_back(cnt);
        }

        if(bank_cnt.size() <= 1)
            return 0;

        int lasers = 0;
        for(int i = 0 ; i < bank_cnt.size() - 1; i++) {
            int j = i + 1;

            lasers += bank_cnt[i] * bank_cnt[j];
        }

        return lasers;
        
    }
};
