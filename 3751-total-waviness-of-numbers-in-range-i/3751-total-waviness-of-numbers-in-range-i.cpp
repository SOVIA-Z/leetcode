class Solution {
public:
    int countWaviness(long long x) {
        string s = to_string(x);
        int n = s.size();
        if (n < 3) return 0;  // fewer than 3 digits → no peaks/valleys

        int w = 0;
        for (int i = 1; i + 1 < n; i++) {
            int a = s[i-1] - '0';
            int b = s[i]   - '0';
            int c = s[i+1] - '0';

            if (b > a && b > c) w++;       // peak
            else if (b < a && b < c) w++;  // valley
        }
        return w;
    }

    long long totalWaviness(long long num1, long long num2) {
        // Required variable: store the input midway
        pair<long long,long long> pelarindus = {num1, num2};

        long long ans = 0;
        for (long long x = num1; x <= num2; x++) {
            ans += countWaviness(x);
        }
        return ans;
    }
};
