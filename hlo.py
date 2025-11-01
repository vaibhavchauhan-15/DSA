import math  
import os  
import random     
import re   
import sys      
 
def splitIntoTwo(arr):    
    n = len(arr) 
    total_sum = sum(arr) 
    left_sum = 0
    count = 0

    for i in range(n - 1): 
        left_sum += arr[i]
        right_sum = total_sum - left_sum
        if left_sum > right_sum:
            count += 1
    return count

if __name__ == '__main__':
    n = int(input().strip())
    arr = []
    for _ in range(n): 
        arr_item = int(input().strip())
        arr.append(arr_item) 

    result = splitIntoTwo(arr)
    print(result)    
