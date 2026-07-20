class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        string rev="";
        for(char ch:s){
            if(isalnum(ch))
            str+=tolower(ch);
        }
        for(int i=str.size()-1;i>=0;i--){
            rev+=str[i];
        }
        return rev==str;
    }
};