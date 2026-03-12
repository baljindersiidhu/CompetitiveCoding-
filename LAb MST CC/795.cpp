int helperfunction(vector<int>& nums,int range){
    int ans=0;
    int curr=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=range){
            curr++;
        }
        else{
            curr=0;
        }
        ans+=curr;

    }
    return ans;
}

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return helperfunction(nums,right)-helperfunction(nums,left-1);
    }
};