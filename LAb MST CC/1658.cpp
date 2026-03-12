class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int maxsum=0;
        int n=nums.size();
        int maxlen=-1;
        for(int i=0;i<nums.size();i++){
            maxsum+=nums[i];
        }

        int window=maxsum-x;
        if(window<0) return -1;
            
        int i=0;
        long long currsum=0;
        int j=0;
        while(j<nums.size()){
            currsum+=nums[j];
            while(currsum>window){
                currsum-=nums[i];
                i++;
            }
            if(currsum==window){
                maxlen=max(maxlen,j-i+1);
            }
            j++;
        }
        if(maxlen==-1) return -1;
        return (n-maxlen);
    }
};