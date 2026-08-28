class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i=s.size()-1; 
        while(i>=0&&!isalnum(s[i])){
           s.pop_back();
           i--;
        }
        
        while(i>=0&&s[i]!=' '){
            count++;
            i--;;
        }
        return count;
    }
};