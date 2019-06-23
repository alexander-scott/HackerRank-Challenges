//
// Created by Alexander Scott on 2019-06-22.
//

#include <vector>

/// \brief Arrays: Left Rotation
/// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
namespace Arrays_Left_Rotation
{
    using namespace std;

    /// \brief Loop through the vector and move each item left d times
    /// \param
    /// 1 <= n <= 10^5
    /// 1 <= d <= n
    /// 1 < a[i] <= 10^6
    /// \return The rotated vector
    vector<int> rotLeft(vector<int> a, int d)
    {
        vector<int> vec(a);

        int arraySize = vec.size();

        // Perform d rotations
        for (int i = 0; i < d; ++i)
        {
            // Cache the first value
            int firstValue = vec[0];

            // Move the values one to the left
            for (int j = 1; j < arraySize; ++j)
            {
                vec[j - 1] = vec[j];
            }

            // Set the last value
            vec[arraySize - 1] = firstValue;
        }

        return vec;
    }
}