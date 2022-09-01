#include"../inc/solution.hpp"

// pattern may be deduced by inspection: iB(n) for n >= 7 is always 3 * iB(n-3) 
int Solution::integerBreak(int n)
{
    if(n > 6){ return 3 * integerBreak(n-3); }
    if(n > 4){ return 3*(n-3); }  // n = 5,6
    return (n == 4) ? n : n-1;  // n = 4,3,2
}