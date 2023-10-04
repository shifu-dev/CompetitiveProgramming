// Longest subarray with sum k. The source array contains zeros and positive numbers.

#include <vector>

using namespace std;

// Brute force
int longestSubarrayWithSumK1(vector<int> arr, long long k)
{
    int max = 0;

    for (int i = 0; i < arr.size() - max; i++)
    {
        long long sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum += arr[j];

            if (sum < k) continue;
            if (sum > k) break;

            int count = j - i + 1;
            if (count > max)
                max = count;
        }
    }

    return max;
}

// Optimal
int longestSubarrayWithSumK2(vector<int> arr, long long k)
{
    int left = 0;
    int right = 0;
    int maxCount = 0;
    long long sum = arr[0];

    while (right < arr.size())
    {
        while (sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
        {
            int count = right - left + 1;
            if (count > maxCount)
                maxCount = count;
        }

        right++;
        sum += arr[right];
    }

    return maxCount;
}
