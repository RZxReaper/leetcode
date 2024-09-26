class Solution {
public:
    int bin_src(vector<int>&v,int l,int r,int key){
        if(l>r){
            return l;
        }
        if(v[(l+r)/2]==key){
            return (l+r)/2;
        }
        else if(v[(l+r)/2]>key){
            return bin_src(v,l,(l+r)/2-1,key);
        }
        else{
            return bin_src(v,(l+r)/2+1,r,key);
        }


    }
    int searchInsert(vector<int>& v, int t) {
        return bin_src(v,0,v.size()-1,t);
    }
};