class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int>ans;
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++){
    if(s.find(nums[i])==s.end()){
    ans.push_back(nums[i]);
    s.insert(nums[i]);
    }
    }
   for(int i=0;i<ans.size();i++){
   nums[i]=ans[i];
   }
    return ans.size();
    }
};