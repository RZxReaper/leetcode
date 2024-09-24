class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string temp=v[0];
        for(int i=0;i<v.size();i++){
            while(temp !=""){
                if(v[i].find(temp)==0){
                    break;
                }
                else{
                    temp=temp.substr(0,temp.size()-1);

                }
            }
        }
        return temp;
    }
};