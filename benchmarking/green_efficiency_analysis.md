# Green Efficiency Analysis

## Measurement Methodology

To measure the performance of our algorithms, we used the `clock()` function from the time library in C. This function helps us measure how much CPU time a program uses while it is running.

To do this, we record a starting time before the algorithm begins and an ending time after the algorithm finishes. The value returned by `clock()` is expressed in CPU "ticks", which represent the amount of processor time used by the program.

To convert this value into seconds, we use the following formula:

`(end - start) / CLOCKS_PER_SEC`

This allows us to express the execution time in seconds, which is easier to understand and compare. Each algorithm was executed several times so we could observe possible variations in runtime.


## Observed Performance Differences
For accurate benchmarking, the program should always run in the same environment. This means using the same computer and trying to keep the same background processes running. If the environment changes too much, the results can be affected.

In our experiment, we ran the program three times under similar conditions. Small differences between runs are normal because the operating system and other background processes can affect execution time.

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
Even if the exact times are slightly different, the results clearly show that the single-pass algorithm is much faster than the naive one.

## Relation Between Runtime and Energy Consumption

The longer a program runs, the more CPU cycles it uses. More CPU cycles usually mean more energy consumption.

In our experiment, the naive algorithm took about one second on average to finish. The single-pass algorithm finished in a very small fraction of a second. This means the optimized algorithm uses much fewer CPU resources.

Our results show that the single-pass algorithm is about 26,196 times faster than the naive algorithm. Because it runs much faster, it would also use much less energy if the program were executed many times.


## Limitations of the Experiment

There are several limits to this experiment :

- The `clock()` function measures CPU time and not real elapsed time. This means that some system activity may not be included in the measurement.

- The environment is not fully controlled. Background programs and system processes can slightly change the results.

- We only ran the experiment three times. In more serious benchmarking tests, many more runs are usually performed to obtain more reliable averages.

- Finally, we did not measure real energy consumption. We only estimate it based on CPU time.



## Practical Engineering Takeaway

This experiment shows how important algorithm choice can be in software engineering. Two algorithms can produce the same result but use very different amounts of computation.

Our measurements show that the single-pass algorithm is about 26,196 times faster than the naive one. When programs run many times or process large amounts of data, this difference can save a lot of time and computing resources.

Writing efficient code is therefore important not only for performance but also for reducing unnecessary energy usage.
