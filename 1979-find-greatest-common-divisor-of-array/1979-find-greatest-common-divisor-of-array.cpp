class Solution {
public:
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
       else{
            b=b%a;
        }
       
    }
     if(a==0){
           return b; 
        }
        return a;
}
    int findGCD(vector<int>& nums) {
         int mn = nums[0];
        int mx = nums[0];
       for(auto var : nums){
           mn=min(mn,var);
           mx=max(mx,var);
       }
        
        return gcd(mn,mx);
    }
};