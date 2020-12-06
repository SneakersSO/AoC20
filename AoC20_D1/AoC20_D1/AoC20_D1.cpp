// AoC20_D1.cpp : This file contains the code used for the solution to Advent of Code 2020, Day 1
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int Find2Prod(vector<int>& Nums)
{
	for (size_t i = 0; i < Nums.size(); ++i)
	{
		for (size_t j = 0; j < Nums.size(); ++j)
		{
			if (Nums[i] + Nums[j] == 2020)
			{
				return Nums[i] * Nums[j];
			}
		}
	}

    return 0;
}

int Find3Prod(vector<int>& Nums)
{
    for (size_t i = 0; i < Nums.size(); ++i)
    {
        for (size_t j = 0; j < Nums.size(); ++j)
        {
            for (size_t k = 0; k < Nums.size(); ++k)
            {
                if (Nums[i] + Nums[j] + Nums[k] == 2020)
                {
                    return Nums[i] * Nums[j] * Nums[k];
                }
            }
        }
    }

    return 0;
}

int main()
{
    vector<int> nums;
    int num;
    fstream input;
    input.open("input.txt");

    if (input.is_open())
    {
        while (input >> num)
        {
            cout << num << '\n';
            nums.push_back(num);
        }

        cout << "\n\nProduct of 2 matches is " << Find2Prod(nums);
        cout << "\n\nProduct of 3 matches is " << Find3Prod(nums);
    }

    else cout << "File was unable to be opened";

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
