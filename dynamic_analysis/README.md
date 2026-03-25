 # Dynamic Analysis


File name : `gdb_fundamentals.txt`

## Output format (strict)
Your file must contain exactly 3 lines, in this order:

Each line must be a 32-bit unsigned value
Format must be:
0x followed by 8 uppercase hexadecimal digits
No labels
No comments
No extra whitespace
No extra lines

## Line 1 — TAG_ACC (32-bit)

```
Where / when:

Inside the function derive_key(...)
Immediately after the loop that iterates over the decoded tag finishes
Before the code combines the accumulator with user_pin and g_state
What to record:

The value of the local variable:

x

Write it as 0x????????.
```


## Line 2 — KEY (32-bit)

```
Where / when:

Still inside derive_key(...)
Immediately before the function returns
What to record:

The value that will be returned by derive_key(...)

The local variable holding that value:

x

Write it as 0x????????.
```

## Line 3 — ACC_AFTER_I0 (32-bit)

```
Where / when:

Inside the function compute_target(...)

During the loop

At the end of the iteration where:

i == 0

After the accumulator has been fully updated for that iteration

What to record:

The value of the local variable:

acc

Write it as 0x????????.
```

## Constraints

You must not:

modify sample.c

add print statements or logging

hardcode values into the output file

All values must be obtained through runtime inspection.

The output must be reproducible by repeating your debugging steps.