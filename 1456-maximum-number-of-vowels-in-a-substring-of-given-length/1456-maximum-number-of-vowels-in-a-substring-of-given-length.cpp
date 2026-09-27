class Solution {
public:
    int maxVowels(string s, int k) {
        int j=0;
        int count=0;
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')count++;
                if(i-j+1==k){
                    maxi=max(maxi,count);
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')count--;
                    j++;
                }
        }
        return maxi;
    }
};