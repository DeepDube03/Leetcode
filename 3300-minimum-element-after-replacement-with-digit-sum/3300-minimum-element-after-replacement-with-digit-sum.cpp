class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int l=nums[i]%10;
                sum+=l;
                nums[i]/=10;
            }
            if(min>sum){
                min=sum;
            }
        }
        return min;

    }
};