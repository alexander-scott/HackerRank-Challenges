#include "gtest/gtest.h"
#include "../../../Solutions/Arrays/2D_Array_DS/Solution.cpp"

#include <fstream>

using namespace std;

/// 2D Array - DS
namespace _2D_Array_DS
{
    class _2D_Array_DS_Test : public ::testing::Test
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

    TEST_F(_2D_Array_DS_Test, Input00)
    {
        Init("../Challenges/2D_Array_DS_Input00.txt", "../Challenges/2D_Array_DS_Output00.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(_2D_Array_DS_Test, Input01)
    {
        Init("../Challenges/2D_Array_DS_Input01.txt", "../Challenges/2D_Array_DS_Output01.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(_2D_Array_DS_Test, Input08)
    {
        Init("../Challenges/2D_Array_DS_Input08.txt", "../Challenges/2D_Array_DS_Output08.txt");
        int result = HourglassSum(arr);
        ASSERT_EQ(expectedResult, result);
    }
}
