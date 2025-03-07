class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n = right+1;
        // sieve
        vector<bool>primes(n, true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i*i <= right; i++) {
            if (primes[i]) {
                for (int j = i*i; j <= right; j+=i) {
                    primes[j] = false;
                }
            }
        }
        vector<int>v;
        for (int i = left; i <= right; i++) {
            if (primes[i]) v.push_back(i);
        }
        if (v.size() < 2) {
            return {-1, -1};
        }

        vector<int>res = {-1, -1};
        int min = INT_MAX;
        for (int i = 1; i < v.size(); i++) {
            if (v[i]-v[i-1] < min) {
                min = v[i]-v[i-1];
                res = {v[i-1], v[i]};
            }
        }
        return res;
    }
};