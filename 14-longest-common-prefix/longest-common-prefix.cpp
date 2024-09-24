class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        for(int i=0;i<v.size();i++){
            while(v[0]!=""){
                if(v[i].find(v[0])==0){
                    break;
                }
                else{
                    v[0]=v[0].substr(0,v[0].size()-1);

                }
            }
        }
        return v[0];
    }
};