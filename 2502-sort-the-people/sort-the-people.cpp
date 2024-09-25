class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        unordered_map<int,string> u;
        vector<string> res;
        if(n.size()==1){return n;}
        for(int i=0;i<h.size();i++){
            u[h[i]]=n[i];
        }
        sort(h.begin(),h.end());
        for(int i=h.size()-1;i>=0;i--){
            res.push_back(u[h[i]]);
        }
        return res;
    }
};