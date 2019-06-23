#include "gtest/gtest.h"
#include "Arrays/2D_Array.cpp"

#include <fstream>

using namespace std;

/// \brief 2D_Array
/// https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
namespace Arrays_2D_Array
{
    class Arrays_2D_Array_Test : public ::testing::Test
    {
    public:
        void Init(const char* inputFile, const char* outputFile)
        {
            ifstream stream;
            stream.open(inputFile);

            arr = vector<vector<int>> (6);
            for (int i = 0; i < 6; i++) {
                arr[i].resize(6);

                for (int j = 0; j < 6; j++) {
                    stream >> arr[i][j];
                }

                stream.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            stream.close();

            stream.open(outputFile);
            stream >> expectedResult;
            stream.close();
        }

    protected:
        int expectedResult;
        vector<vector<int>> arr;
    };

    TEST_F(Arrays_2D_Array_Test, Input00)
    {
        Init("../Challenges/Arrays_2D_Array_Input00.txt", "../Challenges/Arrays_2D_Array_Output00.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_2D_Array_Test, Input01)
    {
        Init("../Challenges/Arrays_2D_Array_Input01.txt", "../Challenges/Arrays_2D_Array_Output01.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_2D_Array_Test, Input08)
    {
        Init("../Challenges/Arrays_2D_Array_Input08.txt", "../Challenges/Arrays_2D_Array_Output08.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_2D_Array_Test, Input03)
    {
        Init("../Challenges/Arrays_2D_Array_Input03.txt", "../Challenges/Arrays_2D_Array_Output03.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }
}
