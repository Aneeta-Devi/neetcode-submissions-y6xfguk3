class Solution {
public:

    vector<int> getBin(int num){
        vector<int> bits;
        while(num){
            bits.push_back(num & 1);
            num >>= 1;
        }
        return bits;
    }

    long long minEnd(int n, int x) {
        if(n == 1) return x;

        vector<int> zero_pos;
        int count = 0;
        int val = x;

        // record zero positions
        while(val){
            if((val & 1) == 0)
                zero_pos.push_back(count);
            count++;
            val >>= 1;
        }

        // required bits
        int reqd_bits = ceil(log2(n));

        for(int i = zero_pos.size(); i < reqd_bits; i++){
            zero_pos.push_back(count++);
        }

        vector<int> append_bits = getBin(n - 1);

        long long ans = x;

        for(int i = 0; i < append_bits.size(); i++){
            if(append_bits[i] == 1){
                ans += (1LL << zero_pos[i]);
            }
        }

        return ans;
    }
};