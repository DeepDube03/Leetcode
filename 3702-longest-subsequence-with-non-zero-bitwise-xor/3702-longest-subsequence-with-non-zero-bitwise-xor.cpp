class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int t=0;
        bool x=false;
        for(int n:nums){
            t=t^n;
            if(n!=0 ) x=true;
        }
        if(x==false) return 0;
        if(t!=0) return nums.size();
        return nums.size()-1;
    }
};