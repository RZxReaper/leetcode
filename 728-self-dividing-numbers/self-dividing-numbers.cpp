class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> res;
        int dig;int temp;int flag;
        for(int i=l;i<=r;i++){
            temp=i;
            flag=1;
            while (temp!=0){
                dig=temp%10;
                if(dig==0 || i%dig!=0){
                    flag=0;break;
                }
                temp=temp/10;
            }
            if (flag){
                res.push_back(i);
            }
        }
        return res;
    }
};