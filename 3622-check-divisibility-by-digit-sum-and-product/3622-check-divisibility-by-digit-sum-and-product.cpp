class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int m=n;
        while(m!=0){
            int ld=m%10;
            sum+=ld;
            pro*=ld;
            m/=10;
        }
        int sum1=sum+pro;
        if(n%sum1==0)return true;
        return false;
    }
};