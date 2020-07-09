/**
 * To compile any algorithm test case before submit it.
 * 
 * To complie: g++ Test.cpp -o testoutput
 * 
 */

#include <iostream>
#include <vector>

// Test function

// main
int main()
{
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> list;
    // picking each number as main number
    // to find rest number to make it as a + b + c = 0
    int main = 0;
    int i = 0;

    // This is just for finding 0 
    // To reduce amount of time complexity
    // if not fond variable 'zero' must be -1
    int zero = -1;
    for(auto &i : nums)
    {
        if(i == 0)
        {
            zero = &i - &nums[0];
        }
    }

    while(main < nums.size())
    {
        // if a + b = 0
        if(nums[main] + nums[i] == 0 && zero != -1)
        {
            std::cout << "test/";
            list[main].push_back(nums[main]);
            list[main].push_back(nums[i]);
            list[main].push_back(nums[zero]);
        }

        // not found zero
        // pick adjacent number(as next) and find fit number for
        // like bubble sort
        // curr + next + c = 0
        int next = main + 1;
        i = next + 1;
        int sum2 = nums[main] + nums[next];
        if(sum2 + nums[i] == 0)
        {
            std::cout << "test" << list[0][0];
            list[main].push_back(nums[main]);
            list[main].push_back(nums[next]);
            list[main].push_back(nums[i]);
        }
        
        i++;
        // if index pointer reaches end
        // go to next number
        if(i == nums.size())
        {
            main++;
            i = main + 1;
        }
        std::cout << "main " << main << std::endl;
        std::cout << "next " << next << std::endl;
        std::cout << "i " << i << std::endl;
    }

    for(auto &e : list)
    {
        for(auto &j : e)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}