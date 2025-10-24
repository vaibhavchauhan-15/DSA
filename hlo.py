
import math
import os
import random
import re
import sys

def getMinimumCost(s, t):
    n = len(s)
    m = len(t)
    
    pos = []
    i = m - 1
    for j in range(n - 1, -1, -1):
        if i >= 0 and s[j] == t[i]:
            pos.append(j)
            i -= 1
            if i < 0:
                break
    if i >= 0:
        return -1
    
    sum_kept = sum(pos)
    total_indices_sum = n * (n - 1) // 2
    k = n - m  # number of deletions
    cost = (total_indices_sum - sum_kept) - (k * (k - 1) // 2)
    return cost

if __name__ == '__main__':
    s = input().strip()
    t = input().strip()
    result = getMinimumCost(s, t)
    print(result)
