class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                }
            }
        }
        vector<int>ans1;
        for(int i:ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};