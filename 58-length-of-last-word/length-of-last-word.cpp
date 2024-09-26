class Solution {
public:
    int lengthOfLastWord(string v) {
        if(v.find(' ')==string::npos){
            return v.size();
        }
        int r=v.size()-1;
        int l=0;
        char last=v[r];
        while(last==' '){
            r--;
            last=v[r];
        }
        l=r;
        while (last!=' '){
            l--;
            if(l>=0){
            last=v[l];
            }
            else{
                break;
            }
        }
        return r-l;
    }
};