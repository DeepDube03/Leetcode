class Solution {
public:
    long long countCommas(long long n) {
        if(n<999){
            return 0;
        }
        long long totalcomma=0;
        long long start=1000;
        while(start<=n){
            totalcomma+=n-start+1;
            start=start*1000;
        }
        return totalcomma;
    }
};