//
// Created by Alexander Scott on 2019-06-22.
//

#include "gtest/gtest.h"
#include "Arrays/Left_Rotation.cpp"

#include <fstream>

using namespace std;

namespace Arrays_Left_Rotation
{
    vector<string> split_string(string input_string) {
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

    class Arrays_Left_Rotation_Test : public ::testing::Test
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

            d = stoi(nd[1]);

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

            getline(stream, a_temp_temp);

            a_temp = split_string(a_temp_temp);

            expectedResult = vector<int>(n);

            for (int i = 0; i < n; i++) {
                int a_item = stoi(a_temp[i]);

                expectedResult[i] = a_item;
            }
        }

    protected:
        int d;
        vector<int> expectedResult;
        vector<int> inputArray;
    };

    TEST_F(Arrays_Left_Rotation_Test, Input00)
    {
        Init("../Challenges/Arrays_Left_Rotation_Input00.txt", "../Challenges/Arrays_Left_Rotation_Output00.txt");
        vector<int> result = rotLeft(inputArray, d);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_Left_Rotation_Test, Input01)
    {
        Init("../Challenges/Arrays_Left_Rotation_Input01.txt", "../Challenges/Arrays_Left_Rotation_Output01.txt");
        vector<int> result = rotLeft(inputArray, d);
        ASSERT_EQ(expectedResult, result);
    }

    TEST_F(Arrays_Left_Rotation_Test, Input10)
    {
        Init("../Challenges/Arrays_Left_Rotation_Input10.txt", "../Challenges/Arrays_Left_Rotation_Output10.txt");
        vector<int> result = rotLeft(inputArray, d);
        ASSERT_EQ(expectedResult, result);
    }
}