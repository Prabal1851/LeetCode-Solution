class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro=1;
        int m = n;

        while(n>0){
            int rem = n % 10;
            pro *= rem;
            n = n/10;
        }

        if(pro % t == 0) 
            return m;
        
        return smallestNumber(m+1,t);
    }
};