//
// Created by Alexander Scott on 2019-06-22.
//

#include <vector>
#include <limits>

/// \brief 2D_Array
/// https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
namespace Arrays_2D_Array
{
    using namespace std;

    /// \brief Loop through the 'hourglass' values in the 2D array and return the largest sum of values.
    /// \param
    /// -9 <= arr[i][j] <= 9
    /// 0 <= i,j <= 5
    /// \return Returns the largest value hourglass
    int HourglassSum(vector<vector<int>> arr)
    {
        int maximumValue = std::numeric_limits<int>::min();

        for (int row = 1; row < 5; ++row)
        {
            for (int col = 1; col < 5; ++col)
            {
                int currentValue = 0;
                currentValue += arr[row][col]; // Middle
                currentValue += arr[row + 1][col]; // Top
                currentValue += arr[row + 1][col - 1]; // Top Left
                currentValue += arr[row + 1][col + 1]; // Top Right
                currentValue += arr[row - 1][col]; // Bot
                currentValue += arr[row - 1][col - 1]; // Bot left
                currentValue += arr[row - 1][col + 1]; // Bot right

                if (currentValue > maximumValue)
                {
                    maximumValue = currentValue;
                }
            }
        }

        return maximumValue;
    }
}