// https://leetcode.com/problems/integer-break/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	for(int i{2}; i<59; ++i)
	{
		std::cout << i << " --> " << Solution().integerBreak(i) << '\n';
	}
	return 0;
}

