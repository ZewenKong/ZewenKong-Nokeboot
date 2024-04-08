

# Lecture 3

## 01. Loops

**Loop** is used to execute a task several times in order to achieve automation.

A loop allows to run a block of code several times, this block of is called **body of the loop**, and the number of times in controlled by a **control condition** (If the control condition is not set properly, the loop might run indefinitely 无限期地).



There are two types of loops in Python:

1. **for** loops
2. **while** loops



## 02. *for*loops

```python
for element in sequence:
    execute_loop_body
```

### 02.01. *for* loops iterating over sequential data types

The set of statements will be executed for each element of the sequence (a list, a tuple, a dictionary, a set, a range or a string).

In python, the following are considered sequences:

* Lists

- Tuples
- Dictionaries
- Sets
- Strings

```python
for i in "training":
    print("Current letter: " + i)
```



### 02.02. `range()` function

The `range()` function generates a **sequence of numbers** starting from a lower bound 'start' to the upper bound 'stop' ('stop' element is not included).

```markdown
range([start], stop, [step]) => range object range

# For example
(0, 7, 1) => start from 0, stop at 7, step 1
generates the sequence: 0, 1, 2, 3, 4, 5, 6 (7 not include)

[start] and [step] are optional (the default values are: start(0), steop(1))
```



### 02.03. *for* loops iterating over a `range()`

The `range()` function is commonly used with **for loops**.

```python
for i in range(0, 8, 1):
    print("2**" + str(i) + " = ", 2**i)
```



## 03. *while*loops

```python
while condition:
    execute_loop_body 
```

```python
x = 0
while x < 10:
    print("The square of " + str(x) + " = ", x*x)
    x = x + 1
```



## 04. Infinite loops

A loop is said to be infinite if the stop condition is **never False**, so the loop never ends.

### 04.01. Intentional 故意的 infinite loop

Sometimes need a loop that never stops executing (e.g. a long-running server application like a Web server may need to continuously check for incoming connections) until we kill the process or close our python application.

```python
list = [1]
# infinite loop
for x in list:
    list.append(x + 1)
    print(x)
```



### 04.02. Unintentional infinite loops

The unintentional infinite loops are due to an error in the code.

```python
# a logical error

num = 1;
while (num > 0):
    print(num)
    num = num + 1
```

```python
# variable handing error

num = 0.1
while num != 1:
    print(num)
    n += 0.1
    
# Some systems cannot represent the value 0.1 exactly, thus introducing rounding errors on each increment. Note that the following code might run ten times as expected on some systems and runs indefinitely on others.
```



## 05. Control statments in *for* and *while* loops

- `break`
- `continue`
- `pass`



### 05.01. `break`

The `break` statement terminates the loop and resumes execution of the code from the next Python statement.

The `break` statement is used when; for a specific case we want to exit the loop and continue with the rest of the code.

```python
for character in 'degree':
    if character == 'g':
        break
    print('Current letter: ', character)
print('Outside the for loop.')
```

```python
num = 5
while num > 0:
    print('Current value is: ', num)
    num = num - 1
    if num == 3:
        break

print('Outside the while loop.')
```



### 05.02. `continue`

The `continue` statement **skips the current iteration** and **continue by executing the next iteration of the loop**.

The `continue` statement is used when; we want to skip the current iteration (skip the execution of the remaining loop code) because a specific condition has been met.

```python
for character in 'degree':
    if character == 'g':
        continue
	print('Current letter: ', character)

print('Outside the for loop.')
```

>   Output

```markdown
Current letter:  d
Current letter:  e
Current letter:  r
Current letter:  e
Current letter:  e
Outside the for loop
```



### 05.03. `pass`

`pass` statement, does nothing (a null operation).

It is used in **while loops** when a statment is required syntactically 语法上 , but the program requires no action, and `pass` can also used as a placeholder for code that has not been implemented yet.

```python
x = 0
for x in range(5):
    if x == 3:
        pass # do nothing - placeholder for code dealing with case x == 3
    print('Number is', x)

print('Done.')
```

The `pass` statement occuring after the `if` conditional statement is telling the program to continue to run the loop and ignore the fact that the variable number evaluates as equal to 3 during one of its iterations.



## 06. for-else loop

If the `else` statement is used with a **for loop**, the `else` statement is executed when for has exhausted the list it is going through.

```python
for item in sequence:
    process(item)
    # no break
else:
    suite (a group of individual statements, which make a single code block)
```



## 07. while-else loop

If the `else` statement is used with a **while loop**, the `else` statement is executed when the condition becomes **False**.

```python
while condition:
    do something
else:
    suite
```



## 08. Nested loops

Nested 嵌套 loops are loops containing other loops.

```python
# Example - for

for element_1 in sequence_1:
    for element_2 in sequence_2:
        statement_2(s)
    statment_1(s)
```

```python
for i in range(3):
    for j in range(5):
        print("(" + str(i) + "," + str(j) + ")")
    print("Finished creating pairs for i =" + str(i))
```

```python
# Example - while

while condition_1:
    while condition_2:
        statement_2(s)
    statement_1(s)
```

```python 
x = 0
while x < 2:
    y = 0
    while y < 3:
        print("(" + str(x) + "," + str(y) + ")")
        y = y + 1
    x = x + 1
   	print("---")

print('Done.')
```

