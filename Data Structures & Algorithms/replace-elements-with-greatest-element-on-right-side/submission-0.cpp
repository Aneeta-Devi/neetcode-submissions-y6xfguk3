class Solution {
    public:
        vector<int> replaceElements(vector<int>& arr) {
                int n = arr.size();
                        int maxSoFar = -1;

                                // Iterate backwards through the array
                                        for (int i = n - 1; i >= 0; i--) {
                                                    int currentVal = arr[i]; // Store current value before overwriting
                                                                arr[i] = maxSoFar;       // Replace with the max to its right
                                                                            
                                                                                        // Update the maxSoFar for the next element to the left
                                                                                                    if (currentVal > maxSoFar) {
                                                                                                                    maxSoFar = currentVal;
                                                                                                                                }
                                                                                                                                        }
                                                                                                                                                
                                                                                                                                                        return arr;
                                                                                                                                                            }
                                                                                                                                                            };

