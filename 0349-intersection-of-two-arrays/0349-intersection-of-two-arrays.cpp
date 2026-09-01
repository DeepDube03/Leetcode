class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>ans(nums1.begin(),nums1.end());
        vector<int>ans1;
        for(int num:nums2){
            if(ans.count(num)){
                ans1.push_back(num);
                ans.erase(num);
            }
        }
        return ans1;
    }
};