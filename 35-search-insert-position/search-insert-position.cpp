class Solution {
public:
    int bin_src(vector<int>&v,int l,int r,int key){
        if(l>r){
            return l;
        }
        int mid=(l+r)/2;
        if(v[mid]==key){
            return (l+r)/2;
        }
        else if(v[mid]>key){
            return bin_src(v,l,mid-1,key);
        }
        else{
            return bin_src(v,mid+1,r,key);
        }


    }
    int searchInsert(vector<int>& v, int t) {
        return bin_src(v,0,v.size()-1,t);
    }
};