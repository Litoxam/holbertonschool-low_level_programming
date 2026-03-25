 # Dynamic Analysis Task 0


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


 # Dynamic Analysis Task 1


File name : `gdb_vsc.txt`

## Output format (strict)

Your file must contain exactly 4 lines, in this exact order:

Lines 1–2: 32-bit unsigned values formatted as 0x + 8 uppercase hex digits
Lines 3–4: 16-bit unsigned values formatted as 0x + 4 uppercase hex digits
No labels, no extra spaces, no extra lines.

## Line 1 — TGT_PRE_BRANCH (32-bit)

```
Where / when:

Inside the function validate(...)
Immediately after the call to compute_target(k) returns
Before the conditional branch that checks (tgt & 1u) modifies tgt
What to record:

The current value of the local variable:

tgt

Write it as 0x????????.

```


## Line 2 — TGT_POST_BRANCH (32-bit)

```
Where / when:

Still inside validate(...)
Immediately after the (tgt & 1u) branch has executed and tgt has been updated
Before mask and sig are computed
What to record:

The value of:

tgt

Write it as 0x????????.
```

## Line 3 — MASK (16-bit)

```
Where / when:

Inside validate(...)
Right before the function returns
After mask has been computed
What to record:

The value of:

mask

Write it as 0x????.
```

## Line 4 — SIG (16-bit)

```
Where / when:

Same point as Line 3 (right before return)
After sig has been computed
What to record:

The value of:

sig

Write it as 0x????.
```

## Constraints

Do not modify sample.c.
Do not add prints/logging.
Do not hardcode values into the output file.
Values must be obtained through runtime inspection in the debugger.
Output must match the required format exactly.
