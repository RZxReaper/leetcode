class Solution {
public:
    int reverse(int x) {
        int num = abs(x);
        int rev = 0;
        while(num>0){
            string st=to_string(rev);
            if (st.length() == 9 && (rev>214748364 || (rev==214748364 && num>8))){
                return 0;
            }
            rev = rev*10+num%10;
            num=num/10;
        }
        if (x>0){
            return rev;
        }
        else{
            return rev*-1;
        }
    }

};