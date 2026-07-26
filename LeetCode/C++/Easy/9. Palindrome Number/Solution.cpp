class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int org=x;
        while (x>0){
            int xcopy= x%10;
            rev=(rev*10)+xcopy;
            x=x/10;
        }

        return (rev==org);

    }
};