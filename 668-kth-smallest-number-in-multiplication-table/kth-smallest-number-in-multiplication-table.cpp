class Solution {
public:

    bool kSmaller(int n, int m, int num, int k){
        int c = 0;
        for (int i=1;i<=m;i++){
            c +=min (n, num/i);
        }
            return c>=k ;
    }
    int findKthNumber(int m, int n, int k) {
        int low=0, hi=m*n, mid, res;

        while (low<hi){
            mid = low + (hi-low)/2;
        

        if (kSmaller(n,m, mid ,k)){
            hi= mid;
        }
        else{
            low=mid+1;
        }
        }
        return low;
        
    }
};