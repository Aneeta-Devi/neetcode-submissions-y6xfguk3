class Solution {
public:
    int guessNumber(int n) {
        int s = 1;
        int e = n;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            int result = guess(mid);
            
            if (result == 0) {
                return mid;      // Found the number
            } 
            else if (result < 0) {
                e = mid - 1;     // mid is too high
            } 
            else {
                s = mid + 1;     // mid is too low
            }
        }
        
        return -1; // Should never reach here
    }
};