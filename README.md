# sorting
4.Sorting Benchmark CS1337
Write a program that uses two identical arrays of just eight integers. It should display the contents of the first array, then call a function to sort the array using an ascending order bubble sort modified to print out the array contents after each pass of the sort. Next, the program should display the contents of the second array, then call a function to sort the array using an ascending order selection sort modified to print out the array contents after each pass of the sort.
Here is the sample input:
```
{ 105, 102, 107, 103, 106, 100, 104, 101 }
{ 105, 102, 107, 103, 106, 100, 104, 101 }
```
Here is the corresponding output:
```
Now performing the bubble sort
------------------------------
After pass 1: 102 105 107 103 106 100 104 101
After pass 2: 102 105 107 103 106 100 104 101
After pass 3: 102 105 103 107 106 100 104 101
After pass 4: 102 105 103 106 107 100 104 101
After pass 5: 102 105 103 106 100 107 104 101
After pass 6: 102 105 103 106 100 104 107 101
After pass 7: 102 105 103 106 100 104 101 107
After pass 8: 102 105 103 106 100 104 101 107
After pass 9: 102 103 105 106 100 104 101 107
After pass 10: 102 103 105 106 100 104 101 107
After pass 11: 102 103 105 100 106 104 101 107
After pass 12: 102 103 105 100 104 106 101 107
After pass 13: 102 103 105 100 104 101 106 107
After pass 14: 102 103 105 100 104 101 106 107
After pass 15: 102 103 105 100 104 101 106 107
After pass 16: 102 103 105 100 104 101 106 107
After pass 17: 102 103 100 105 104 101 106 107
After pass 18: 102 103 100 104 105 101 106 107
After pass 19: 102 103 100 104 101 105 106 107
After pass 20: 102 103 100 104 101 105 106 107
After pass 21: 102 103 100 104 101 105 106 107
After pass 22: 102 103 100 104 101 105 106 107
After pass 23: 102 100 103 104 101 105 106 107
After pass 24: 102 100 103 104 101 105 106 107
After pass 25: 102 100 103 101 104 105 106 107
After pass 26: 102 100 103 101 104 105 106 107
After pass 27: 102 100 103 101 104 105 106 107
After pass 28: 102 100 103 101 104 105 106 107
After pass 29: 100 102 103 101 104 105 106 107
After pass 30: 100 102 103 101 104 105 106 107
After pass 31: 100 102 101 103 104 105 106 107
After pass 32: 100 102 101 103 104 105 106 107
After pass 33: 100 102 101 103 104 105 106 107
After pass 34: 100 102 101 103 104 105 106 107
After pass 35: 100 102 101 103 104 105 106 107
After pass 36: 100 102 101 103 104 105 106 107
After pass 37: 100 101 102 103 104 105 106 107
After pass 38: 100 101 102 103 104 105 106 107
After pass 39: 100 101 102 103 104 105 106 107
After pass 40: 100 101 102 103 104 105 106 107
After pass 41: 100 101 102 103 104 105 106 107
After pass 42: 100 101 102 103 104 105 106 107
After pass 43: 100 101 102 103 104 105 106 107
After pass 44: 100 101 102 103 104 105 106 107
After pass 45: 100 101 102 103 104 105 106 107
After pass 46: 100 101 102 103 104 105 106 107
After pass 47: 100 101 102 103 104 105 106 107
After pass 48: 100 101 102 103 104 105 106 107
After pass 49: 100 101 102 103 104 105 106 107

Now performing the selection sort
---------------------------------
After pass 1: 100 102 107 103 106 105 104 101
After pass 2: 100 101 107 103 106 105 104 102
After pass 3: 100 101 102 103 106 105 104 107
After pass 4: 100 101 102 103 106 105 104 107
After pass 5: 100 101 102 103 104 105 106 107
After pass 6: 100 101 102 103 104 105 106 107
After pass 7: 100 101 102 103 104 105 106 107
```
