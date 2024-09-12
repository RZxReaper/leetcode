class Solution {
public:
    int romanToInt(string s) {
        int cur=1;
        int ans = 0;
        for (int prev = 0; prev < s.length(); cur++,prev++){
            char r=s[cur];
            char l=s[prev];
            if (l == 'M'){
                ans+=1000;
            }
            else if(l == 'C' && r == 'M'){
                ans+=900;
                prev++;
                cur++;
            }
            else if (l == 'D'){
                ans+=500;
            }
            else if (l == 'C' and r == 'D'){
                ans+=400;
                prev++;
                cur++;
            }
            else if (l == 'X' && r == 'C'){
                ans+=90;
                prev++;
                cur++;
            }
            else if (l == 'C'){
                ans+=100;
            }
            else if (l == 'L'){
                ans+=50;
            }
            else if (l == 'X' and r == 'L'){
                ans+=40;
                prev++;
                cur++;
            }
            else if (l == 'I' && r == 'X'){
                ans+=9;
                prev++;
                cur++;
            }
            else if (l == 'X'){
                ans+=10;
            }
            else if (l == 'V'){
                ans+=5;
            }
            else if (l == 'I' and r == 'V'){
                ans+=4;
                prev++;
                cur++;
            }
            else{
                ans+=1;
            }


        }
        cout<<ans<<endl;
        return ans;
    }
};