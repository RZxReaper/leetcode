class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        unordered_map<int,string> u;
        if(n.size()==1){return n;}
        for(int i=0;i<h.size();i++){
            u[h[i]]=n[i];
        }
        sort(h.rbegin(),h.rend());
        for(int i=0;i<h.size();i++){
            n[i]=u[h[i]];
        }
        return n;
    }
};