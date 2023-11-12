class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        for(;str1.length();){

            if(str1.length() < str2.length())
                std::swap(str1, str2);

            if(str1.substr(str1.length() - str2.length()) != str2)
                return "";

            str1 = str1.substr(0, str1.length() - str2.length());

        }

        return str2;
    }
};