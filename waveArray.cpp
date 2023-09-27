class Solution
{
public:
    void convertToWave(int n, vector<int> &arr)
    {

        // Your code here
        int i = 0, j = 1; // two pointer approach
        while (j < n)     // j ensures two elements are available to swap
        {
            swap(arr[i], arr[j]); // swap the adjacents
            i += 2, j += 2;       // move by two positions
        }
    }
}