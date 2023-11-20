class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // We can just find position of last glass, paper and metal and edit travel vector
        // Aftet that we only need add those 3 times

        int metal = 0;
        int paper = 0;
        int glass = 0;

        int total_time = 0;

        for(int i = 0; i < garbage.size(); i++) {
            for(auto& e: garbage[i]) {
                total_time++;
                if (e == 'M') metal = i;
                if (e == 'G') glass = i;
                if (e == 'P') paper = i;
            }
        }

        for(int i = 1; i < travel.size(); i++) {
            travel[i] += travel[i-1];
        }

        if (metal) total_time += travel[metal-1];
        if (paper) total_time += travel[paper-1];
        if (glass) total_time += travel[glass-1];
        return total_time;

    }
};
