# Language-C-Check-the-Prime-Number
This is a C program to check if an integer is a prime number or not.
A prime number is an integer which could only be fully divided by 1 or itself. For example: 1, 2, 3, 5, 7, 11, 13, 17...
The logic to check that is to divide this integer from 2 to half itself. 
For example: if check 10, then divide 10 by 2, 3, 4, 5. 
If NOT single one the result of these division equals to zero (no remainder), then the number is a prime number.
Otherwise, the number is NOT a prime number. In another word, the number could be divided without remainder with at least one of these 
numbers.

The reason only choose number from 2 to half itself. Because there is no need to check 1 and itself (every number could be divided by 1 
and itself). And if the number is greater than half itself, there is also no need to check. Because no number could divided  without 
remainder by another number which is greater than half itself.
