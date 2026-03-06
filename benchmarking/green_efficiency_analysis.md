# Green Efficiency Analysis

## Measurement Methodology
```
We measured our algorithms using the clock() function, which gave us CPU time. We converted this into seconds. To express this in human time, we converted it into seconds using (end - start) / CLOCKS_PER_SEC.

```

## Observed Performance Differences
To compare performance, we ran the program in the same conditions. For the same task, the times were slightly different, but these small differences didn’t matter.

### Run 1
```
Naive algorithm result: 625025000
Naive algorithm time: 0.976509 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000040 seconds

```

### Run 2
```
Naive algorithm result: 625025000
Naive algorithm time: 1.014258 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000033 seconds

```

### Run 3
```
Naive algorithm result: 625025000
Naive algorithm time: 1.021399 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000042 seconds
```

## Relation Between Runtime and Energy Consumption
```
The longer a program runs, the more CPU cycles and energy it uses. In our tests, the naive algorithm took about 1 second on average, while the optimized one took only a tiny fraction of a second. Since CPU time is related to energy, less time means less energy. So, faster code also uses less power.
```

## Limitations of the Experiment
```
There are limits to our test. Clock() only measures CPU time, not real time. The environment can change. Three runs are too few for strong conclusions, and we guess energy from CPU time, not actual power.

```

## Practical Engineering Takeaway
```
Our measurements show that the single-pass algorithm is about 26,196 times faster than the naive one. In other words, the faster the algorithm, the less CPU time and thus less energy it uses. The big difference proves that choosing an efficient algorithm makes a huge impact on both time and energy.

```