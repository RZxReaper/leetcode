class Solution {
public:         
    vector<int> counting(vector<int>& nums){
        int minval = *min_element(nums.begin(),nums.end());
        int maxval = *max_element(nums.begin(),nums.end());
        int frequ = maxval-minval+1;
        vector<int> freq(frequ,0),res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-minval;
            freq[nums[i]]=freq[nums[i]]+1;
        }
        for(int i=1;i<freq.size();i++){
            freq[i]=freq[i]+freq[i-1];
        }
        for(int i=0;i<nums.size();i++){
            res[freq[nums[i]]-1]=nums[i]+minval;
            freq[nums[i]]=freq[nums[i]]-1;
        }
        return res;
    }
    vector<int> sortArray(vector<int>& nums) {
        return counting(nums);
    }
};