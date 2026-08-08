class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it=mp.rbegin();it!=mp.rend();it++){
            if(it->second==2){
                ans.push_back(it->first);
                if(ans.size()==2){
                    break;
                }
            }
        }
        return ans;
    }
};