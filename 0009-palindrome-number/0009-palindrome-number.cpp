class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long long ans=0;
        if(y<0)return false;
        while(x!=0){
          int l=  x%10;
            ans=ans*10+l;
            x/=10;
        }
        if(ans==y)return true;
        return false;
    }
};