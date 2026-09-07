class Solution {
public:
    int distinctSubseqII(string s) {
        int n=s.size();
        int Mod=1e9+7;
        vector<int> dp(n,1);
        int result=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(s[i]!=s[j]){
                    dp[i]=(dp[i]+dp[j])%Mod;
                }
            }
            result=(result+dp[i])%Mod;
        }
        return result;
    }
};