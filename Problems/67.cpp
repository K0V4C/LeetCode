class Solution {
public:
    string addBinary(string a, string b) {

        std::string result = "";
        int carry = 0;

        while(a.size() < b.size())
            a.insert(0, "0");
        
        while(b.size() < a.size())
            b.insert(0, "0");


        for(int i = 0; i < a.size() ; i++){
            int sum = 0;
            if( a[a.size() - 1 - i] == '1' ) sum++;
            if( b[b.size() - 1 - i] == '1' ) sum++;

            if( sum == 0 &&  carry == 0){
                result.insert(0, "0");
            } else if ( sum == 0 && carry == 1){
                result.insert(0, "1");
                carry = 0;
            } else if ( sum == 1 && carry == 0) {
                result.insert(0, "1");
            } else if( sum == 1 && carry == 1) {
                result.insert(0, "0");
                carry = 1;
            } else if ( sum == 2 && carry == 0){
                result.insert(0, "0");
                carry = 1;
            } else {
                result.insert(0, "1");
                carry = 1;
            }
        }

        if (carry == 1)
            result.insert(0, "1");

        return result;
        
    }
};