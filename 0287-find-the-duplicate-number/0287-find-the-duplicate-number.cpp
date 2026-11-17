class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_set<int>s;
    int ans;
    s.insert(nums[0]);
    for(int i=1;i<nums.size();i++){
    if(s.find(nums[i])==s.end()){
    s.insert(nums[i]);
    }
    else{
    ans=nums[i];
    break;
    }
    }  
    return ans;
    }
};