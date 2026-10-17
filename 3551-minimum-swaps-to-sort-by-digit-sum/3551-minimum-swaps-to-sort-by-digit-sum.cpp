class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<array<int,3>>arr(n);
        for(int i=0;i<n;i++){
            int r=nums[i];
            int sum=0;
            while(r>0){
                sum+=r%10;
                r=r/10;
            }
            arr[i]={sum,nums[i],i};
        }
        sort(arr.begin(),arr.end());
        vector<bool> seen(n,false);
        int result=0;
        for(int i=0;i<n;i++){
            if(seen[i] || arr[i][2]==i) continue;
            int j=i,len=0;
            while(!seen[j]){
                seen[j]=true;
                j=arr[j][2];
                len++;
            }
            result+=len-1;
        }
        return result;
    }
};