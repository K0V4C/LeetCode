class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        // Try to solve it without a hashmap
        
        int right = 0;
        int left = 0;

        std::unordered_map<int, int> fruit_types;

        while(right < fruits.size()){
            
            fruit_types[fruits[right]]++;

            if(fruit_types.size() > 2){
                fruit_types[fruits[left]]--;
                if(fruit_types[fruits[left]] == 0)
                    fruit_types.erase(fruits[left]);
                
                left++;

            }

            ++right;
        }

        return right - left;
    }
};