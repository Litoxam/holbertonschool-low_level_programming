#Comparison Algorithms metrics


##Run 1
'''
Naive algorithm result: 625025000
Naive algorithm time: 0.976509 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000040 seconds
'''

##Run 2
'''
Naive algorithm result: 625025000
Naive algorithm time: 1.014258 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000033 seconds
'''

##Run 3
'''
Naive algorithm result: 625025000
Naive algorithm time: 1.021399 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000042 seconds
'''

### Average execution time for Naive
(0.976509 + 1.014258 + 1.021399) / 3 ~= 1.00406

### Average execution time for Single-pass
(0.000040 + 0.000033 + 0.000042) / 3 ~= 0.00003833

#### Relative Difference between Naive and Single-pass
1.00406 / 0.00003833 ~= 26 196
Implementation Naive is ~26 196 times slower than Single-pass