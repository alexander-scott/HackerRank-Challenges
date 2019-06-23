//
// Created by Alexander Scott on 2019-06-22.
//

#include <vector>

/// \brief Arrays: Left Rotation
/// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
/// Constraints
/// 1 <= n <= 10^5
/// 1 <= d <= n
/// 1 < a[i] <= 10^6
namespace Arrays_Left_Rotation
{
    using namespace std;

    /// \brief Loop through the vector and move each item left d times
    /// \param a The initial vector to rotate
    /// \param d The number of rotations
    /// \return The rotated vector
    vector<int> RotLeft(vector<int> a, int d)
    {
        int arraySize = a.size();

        // Create a new vector for our items
        vector<int> vec(arraySize);

        // Work out how many times we need to rotate the values
        // If the rotation value is greater than the size of the array,
        // use the modulus operator to disregard 'full rotations', where
        // the items do a complete rotation and end up in the same spot.
        int rotationCount = d;
        if (rotationCount > arraySize)
        {
            rotationCount = rotationCount % arraySize;
        }

        // Loop through each item in the array and calculate the new index
        for (int j = 0; j < arraySize; ++j)
        {
            int newIndex = j - rotationCount;

            // If the new index is less than 0 we need to bump it back to the end
            if (newIndex < 0)
            {
                newIndex = arraySize + newIndex;
            }

            vec[newIndex] = a[j];
        }

        return vec;
    }
}