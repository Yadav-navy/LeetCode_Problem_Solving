class Solution {
public:
    int countPrimes(int n) {
        if (n < 2){
            return 0;
        }
        vector<bool> prime(n, true);  // consider every number as prime
        prime[0] = prime[1] = false;
        
        int count = 0;
        for ( int i = 2; i < n; i++){
            if (prime[i]==true){
                count++;
                for (int j = 2*i; j < n; j=j+i  ){
                    prime[j] = 0;   
                }
            }
        }
        return count;
        
    }
};



// class Solution {
// private:
//     bool isPrime(int n){
//         for (int i = 2; i < n ; i++){
//             if (n % i == 0){
//                 return false;
//             }
//         }
//     return true;
//     }
    
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         for (int i = 2 ; i < n; i++){
//             if(isPrime(i)){
//                 count++;
//             }
//         }
//     return count;
              
//     }
// };