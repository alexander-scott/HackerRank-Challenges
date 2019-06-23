//
// Created by Alexander Scott on 2019-06-23.
//

#include "gtest/gtest.h"
#include "Arrays/Minimum_Swaps_2.cpp"

#include <fstream>

using namespace std;

/// \brief Arrays: Left Rotation
/// https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays&h_r=next-challenge&h_v=zen
namespace Arrays_Minimum_Swaps_2
{
    class Arrays_Minimum_Swaps_2_Test : public ::testing::Test
    {
    public:
        void Init(const char* inputFile, const char* outputFile)
        {
            ifstream stream;
            stream.open(inputFile);

            string nd_temp;
            getline(stream, nd_temp);

            vector<string> nd = split_string(nd_temp);

            int n = stoi(nd[0]);

            string a_temp_temp;
            getline(stream, a_temp_temp);

            vector<string> a_temp = split_string(a_temp_temp);

            inputArray = vector<int>(n);

            for (int i = 0; i < n; i++) {
                int a_item = stoi(a_temp[i]);

                inputArray[i] = a_item;
            }

            stream.close();

            stream.open(outputFile);
            stream >> expectedResult;
            stream.close();
        }

    protected:
        int expectedResult;
        vector<int> inputArray;

    private:
        vector<string> split_string(string input_string)
        {
            string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
                return x == y and x == ' ';
            });

            input_string.erase(new_end, input_string.end());

            while (input_string[input_string.length() - 1] == ' ') {
                input_string.pop_back();
            }

            vector<string> splits;
            char delimiter = ' ';

            size_t i = 0;
            size_t pos = input_string.find(delimiter);

            while (pos != string::npos) {
                splits.push_back(input_string.substr(i, pos - i));

                i = pos + 1;
                pos = input_string.find(delimiter, i);
            }

            splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

            return splits;
        }
    };

    TEST_F(Arrays_Minimum_Swaps_2_Test, Input00)
    {
        Init("../Challenges/Arrays_Minimum_Swaps_2_Input00.txt", "../Challenges/Arrays_Minimum_Swaps_2_Output00.txt");
        int result = MinimumSwaps(inputArray);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_Minimum_Swaps_2_Test, Input01)
    {
        Init("../Challenges/Arrays_Minimum_Swaps_2_Input01.txt", "../Challenges/Arrays_Minimum_Swaps_2_Output01.txt");
        int result = MinimumSwaps(inputArray);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_Minimum_Swaps_2_Test, Input02)
    {
        Init("../Challenges/Arrays_Minimum_Swaps_2_Input02.txt", "../Challenges/Arrays_Minimum_Swaps_2_Output02.txt");
        int result = MinimumSwaps(inputArray);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_Minimum_Swaps_2_Test, Input03)
    {
        Init("../Challenges/Arrays_Minimum_Swaps_2_Input03.txt", "../Challenges/Arrays_Minimum_Swaps_2_Output03.txt");
        int result = MinimumSwaps(inputArray);
        ASSERT_EQ(expectedResult, result);
    }
}