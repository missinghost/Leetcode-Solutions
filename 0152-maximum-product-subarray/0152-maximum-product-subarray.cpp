class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int global_max=INT_MIN;
    int maxx=1;
    int minn=1;
    for(int i=0;i<nums.size();i++){
    if(nums[i]<0){
    swap(minn,maxx);
    }
    maxx=max(nums[i],maxx*nums[i]);
    minn=min(nums[i],minn*nums[i]);
    global_max=max(global_max,maxx);
    } 
    return global_max; 
    }
};