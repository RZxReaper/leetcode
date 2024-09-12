class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double avg=0;
        double max=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        avg=sum/k;
        max=avg;
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k]+nums[i];
            avg=sum/k;
            if(avg>max){
                max=avg;
            }
        }
        return max;
    }
};