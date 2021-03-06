/*
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for(int i=1; i<=n; ++i){
            if(i%15==0) res[i-1] = "FizzBuzz";
            else if(i%5==0) res[i-1] = "Buzz";
            else if(i%3==0) res[i-1] = "Fizz";
            else res[i-1] = to_string(i);
        }
        return res;
    }
};
