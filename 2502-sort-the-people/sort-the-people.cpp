class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<vector<int>> v;
        if(n.size()==1){return n;}
        vector<string> res;
        int arr[2];
        for(int i=0;i<h.size();i++){
            vector<int> temp;
            temp.push_back(h[i]);
            temp.push_back(i);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        cout<<v[0][0]<<" "<<v[1][0]<<" "<<v[2][0];
        for(int i=n.size()-1;i>=0;i--){
            res.push_back(n[v[i][1]]);
        }
        return res;
    }
};