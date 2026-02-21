class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int sum = 0;
        int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        
        for (int i = left; i <= right; i++) {
            int count = 0;
            int temp = i;
            
            while (temp > 0) {
                if (temp % 2 == 1) count++;
                temp /= 2;
            }
            for (int k = 0; k < 11; k++) {
                if (count == primes[k]) {
                    sum++;
                    break;
                }
            }
        }
        return sum;
    }
};