class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        std::vector<int> s;

        for(int i = left; i <= right; i++){

            int c = i;
            bool flag = true;
            while(c > 0){
                if( c % 10 == 0)
                    flag = false;
                else
                    if( i % (c%10) != 0)
                        flag = false;
                c = c/10;
            }

            if (flag) s.push_back(i);
        }

        return s;
        
    }
};