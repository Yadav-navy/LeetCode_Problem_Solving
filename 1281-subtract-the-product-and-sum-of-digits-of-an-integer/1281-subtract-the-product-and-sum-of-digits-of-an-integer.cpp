class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;

        while (n !=0){
        int a = n %10;  //last digit
        sum = sum + a;
        prod = prod * a;
        n = n/10;

        }

        return (prod-sum);
    }
};