class Solution {
public:
    bool checkPerfectNumber(int num) {
        int max=num-1;
        int curr=1;
        int count=0;
        while(max>0){
            curr++;
            if(num%curr==0){
                max-=curr;
                max-=num/curr;
            }
        }
        if(curr == num || max!=0){
            return false;
        }        
        int curr2=curr+1;
        while(num%curr2!=0 && curr2<num){
            curr2++;
        }
        if(curr2==num || curr*curr2==num){return true;}else{return false;}
    }
};