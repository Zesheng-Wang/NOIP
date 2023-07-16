#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> nums[i];
    }

    std::vector<int> sortedNums = nums;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (sortedNums[j] > sortedNums[j + 1])
            {
                int temp = sortedNums[j];
                sortedNums[j] = sortedNums[j + 1];
                sortedNums[j + 1] = temp;
            }
        }
    }

    std::vector<int> rankMap(n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (nums[i] == sortedNums[j])
            {
                rankMap[i] = j + 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << rankMap[i] << " ";
    }

    return 0;
}
