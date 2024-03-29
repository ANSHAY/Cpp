/**
 * An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.
**/

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        while(n>0 && n%5==0){
            n /= 5;
        }
        while(n>0 && n%3==0){
            n /= 3;
        }
        while(n>0 && n%2==0){
            n /= 2;
        }
        if(n==1) return true;
        return false;
    }
};