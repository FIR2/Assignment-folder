# Assignment-folder
To solve this problem, we can use dynamic programming. We first traverse the array from left to right and find the maximum profit we can make by buying the stock on or before the ith day and selling it on the ith day. We then traverse the array from right to left and find the maximum profit we can make by buying the stock after the ith day and selling it on or after the ith day. Finally, we combine these two profits to find the maximum profit we can make with at most two transactions.
