class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        
        long long krish=sqrt(c);
        long long j=krish;

        while(i<=j){
            if(i*i + j*j==c)return true;
            else if(i*i + j*j<c)i++;
            else j--;
        }
        return false;
    }
};