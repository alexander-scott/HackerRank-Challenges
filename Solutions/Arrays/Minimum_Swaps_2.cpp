//
// Created by Alexander Scott on 2019-06-23.
//

#include <vector>

/// \brief Arrays: Minimum Swaps 2
/// https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays&h_r=next-challenge&h_v=zen
namespace Arrays_Minimum_Swaps_2
{
    using namespace std;

    /// \brief Find the minimum number of swaps required to sort the array
    /// \param arr The array to be sorted
    /// \return Returns the minimum number of swaps
    int MinimumSwaps(vector<int> arr)
    {
        int swapCount = 0;
        int arraySize = arr.size();

        for (int i = 0; i < arraySize; ++i)
        {
            // If this item is at the correct position already, skip
            if (arr[i] == (i + 1))
                continue;

            // Swap this item with the item at the desired index
            swap(arr[i], arr[arr[i] - 1]);

            // Increase swap count and --i to perform the check on the swapped item
            // now at this position.
            swapCount++;
            i--;
        }

        return swapCount;
    }
}