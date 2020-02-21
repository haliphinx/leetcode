class Solution {
public:
    int reverse(int x) {
        if(x == 0){
            return 0;
        }
        long ans = 0;
        int sign = x>=0?1:-1;
        x *= -sign;
        while(x<=-1){
            ans *= 10;
            int res = x/10;
            int cou = x%10;
            x = res;
            ans += cou;
        }
        ans *= -sign;
        if((ans>INT_MAX)||(ans<INT_MIN)){
            return 0;
        }
        return int(ans);
    }
};