# Lecture 2

## 01. Branching

### 01.01. Decision making

Python supports decision making through the use of `if`,  `elif` and `else` keywords.



### 01.02. `if` keyword

```python
x = 10
if x > 6:
  print("Greater than 6.")
  print("Done.")
```

>   writing `if` statment in one line (no `elif` and `else`)

```python
y = 10
if (x == y): print("x and y are equal.")
```



#### 1) Indentation block of `if` statment

When `if` condition is **True**, all lines of code within the indentation block should be executed. And `if` statement should always be followed by a code block.



### 01.03. Conditions

A condition resolved to **True** or **False** (Boolean value), the following return a boolean value:

1.   Comparison operators:
     - x = y
     - x != y
     - x < y
     - x <= y
     - x > y
     - x >= y
2.   Logical operators:
     - a not b
     - a or b
     - not(a)
3.   Function returing a boolean value



### 01.04. Multiple conditions

Using **logical operators** (e.g. `and`, `or` and `not`), to combine several conditions into a single `if` statement. And `else` keyword catches anything which is not caught by the preceding conditions.

```python
mark = 80

if mark >= 70 and mark <= 100:
    print("Distinction")
elif mark < 70 and mark >= 60:
    print("Good")
elif mark < 60 and mark >= 50:
    print("Pass")
else:
    print("Fail or wrong mark entered.")
```

In an `if` block, it can contain only one `if` block, and zero or more `elif` blocks, and zero or one `else` block (`else` and `elif` are both optional).

>   Writing an `if-else` in one line

```python
print("X") if x > y else print("Y")
```



### 01.05. Nested `if-elif-else`

```python
if expression_1:
    statement()
    if expression_2:
        statement()
    elif expression_3:
        statement()
    else:
        statment()
elif expression_4:
    statement()
else:
    statment()
```

However, an extensive use of nested `if-elif-else` statments is not good.



## 02. Taking input from the user

### 02.01. Taking input from one user

The `input()` function is used to take input from the user, and the (user's) input can be stored in a vriable.

```python
user_input = input()
print("Hello ", user_input)
```

>   Adding a prompt 提示 message to take input

```python
user_input = input("Enter a name: ")
print("Hello ", user_input)
```

The `input()` function accepts **strings** by default. Hence, when enter an input, the `input()` function converts it into a string.

>   Use explicit conversion can enter other types of value.

```python
my_value = int(input()) # enter as integer
print("Total =", 10 + my_value)
```



### 02.02. Taking multiple inputs at a time

Use `split()` function to get multiple inputs at a time, the `split()` function can split the values entered based on the space between these values.

```python
x, y, z = input("Enter three values: ").split()
print("Total number:", x)
print("Number of Group 1:", y)
print("Number of Group 2:", z)
```



## 03. Operators

### 03.01. Arithmetic operators

| Operator | Description                                                  | Example                                    |
| :------: | ------------------------------------------------------------ | ------------------------------------------ |
|    +     | Addition - Adds x to y                                       | x + y = 10                                 |
|    -     | Subtraction - Subtract y from x                              | x - y = 10                                 |
|    *     | Multiplication - Multiplies x with y                         | x * y = 100                                |
|    /     | Division - Divides y be x                                    | y / x = 10                                 |
|    %     | Modulus - Returns the remainder of the division of x by y    | y % x = 10                                 |
|    **    | Exponent - Performs exponential(power) calculation on operators | x ** y = 100                               |
|    //    | Floor Division - The division of operands where the result is the quotient in which the digits after the decimal point are removed. But if one of the operands is negative, the result is floored, rounded away from zero (towards negative infinity) | 9//2 = 4 and 9.0//2.0 = 4.0 and -9//2 = -5 |



### 03.02. Comparison operators

| Operator | Description                                                  | Example           |
| -------- | ------------------------------------------------------------ | ----------------- |
| ==       | If the values of two operands are equal, then the condition becomes **True** | (x == y) is False |
| !=       | If the values of two operands are not equal, them the condition becomes **True** | (x != y) is True  |
| >        | If the value of left operand is greater than the value of right operand, then condition becomes **True** | (x > y) is False  |
| <        | If the value of left operand is less than the value of right operand, then condition becomes **True** | (x < y) is True   |
| >=       | If the value of left operand is greater than or equal to the value of right operand, then condition becomes **True** | (x >= y) is False |
| <=       | If the value of left operand is less than or equal to the value of right operand, then condition becomes **True** | (x <= y) is True  |



### 03.03. Assignment operators

| Operator | Description                                                  | Example                                              |
| -------- | ------------------------------------------------------------ | ---------------------------------------------------- |
| =        | Assigns values from right side operands【操作数】to left side operands | z = x + y [assigns value of x + y to the variable z] |
| +=       | It adds right operand to the left operand and assign the result | z += x [z = z + x]                                   |
| -=       | It subtracts right operand from the left operand and assign the result to left operand | z -= x [z = z - x]                                   |
| *=       | It multiplies right operand with the left operand and assign the result to left operand | z *= x [z = z * x]                                   |
| /=       | It divides left operand with the right operand and assign the result to left operand | z /= x [z = z / x]                                   |
| %=       | It takes  modulus using two operands and assign the result to left operand | z %= x [z = z % x]                                   |
| **=      | Performs exponential (power) calculation on operators and assign value to the left operand | z **= x                                              |
| //=      | It performs floor division on operators and assign value to the left operand | z //= x [z = z // x]                                 |



### 03.04. Logical operators

#### 1) Truth tables

**T stands for True, F stands for False**

**Truth table for logical 'not'**

|  p   | not(p) |
| :--: | :----: |
|  T   |   F    |
|  F   |   T    |



**Truth table for logical 'and'**

|  p   |  q   | p and q |
| :--: | :--: | :-----: |
|  T   |  T   |    T    |
|  T   |  F   |    F    |
|  F   |  F   |    F    |
|  F   |  T   |    F    |



**Truth table for logical 'or'**

|  p   |  q   | p or q |
| :--: | :--: | :----: |
|  T   |  T   |   T    |
|  T   |  F   |   T    |
|  F   |  F   |   F    |
|  F   |  T   |   F    |



#### 2) Logical operators

Logical operators operate on **logical values**

| Operator | Description                                                  | Example              |
| -------- | ------------------------------------------------------------ | -------------------- |
| and      | Logical AND - If both the operands are True then condition becomes True | (x and y) is False   |
| or       | Logical OR - If any of the two operands are non-zero then condition becomes True | (x or y) is True     |
| not      | Logical NOT - Used to reverse the logical state of its operand | not(x and y) is True |



### 03.05. Bitwise operators

Bitwise 按位 operators performs **bit-by-bit operations**

#### 1) Truth table for binary XOR (Exclusive OR)

| p    | q    | p ^ q |
| ---- | ---- | ----- |
| 1    | 1    | 0     |
| 1    | 0    | 1     |
| 0    | 0    | 0     |
| 0    | 1    | 1     |



#### 2) Operators in binary

| Operator | Description                       | Example                         |
| -------- | --------------------------------- | ------------------------------- |
| &        | Binary AND                        | x & y                           |
| \|       | Binary OR                         | x \| y                          |
| ~        | Binary ones complement 二进制补码 | ~x                              |
| ^        | Binary XOR 逻辑异或               | x ^ y                           |
| <<       | Binary shift left by *n* bits     | x << 2 (here *n* is equal to 2) |
| >>       | Binary shift right by *n* bits    | x >> 2                          |



### 03.06. Membership operators

| Operator   | Description                                                  |
| ---------- | ------------------------------------------------------------ |
| **in**     | Evaluates to **True** if it finds a variable in the specified sequence and **False** otherwise |
| **not in** | Evaluates to **True** if it does not find a variable in the specified sequence and **False** otherwise |

```python
a = "for"
b = "bal"
my_string = "fortunately"

print(a in my_string)
print(b not in my_string)
```



### 03.07. Identity operators

| Operator   | Description                                                  |
| ---------- | ------------------------------------------------------------ |
| **is**     | Evaluates to **True** if the variables on either side of the operator point to the same object and **False** otherwise |
| **is not** | Evaluates to **False** if the variables on either side of the operator point to the same object and **True** otherwise |



### 03.08. Operators precedence 优先级

| Priority | Operator                                                     |
| -------- | ------------------------------------------------------------ |
| 1        | **()** Parentheses 括号                                      |
| 2        | ****** Exponentiation                                        |
| 3        | **~** Complement, **+** unary plus and **-** minus           |
| 4        | ***** Multiply, **/** divide, **%** modulo and **//** floor division |
| 5        | **+** Addition, and **-** subtraction                        |
| 6        | **>>** Right bitwise shift, and **<<** left bitwise shift    |
| 7        | **&** Biwise 'AND'                                           |
| 8        | **^** Bitwise exclusive OR, and **\|** regular OR            |
| 9        | **<=**, **<**, **>**, **>=** Comparison operators            |
| 10       | **==**, **!=** Equality operators                            |
| 11       | **=**, **%=**, **/=**, **//=**, **-=**, **+=**, *=, **= Assignment operators |
| 12       | **is**, **is not** Identity operators                        |
| 13       | **in**, **not in** Membership operators                      |
| 14       | **not**, **or**, **and** Logical operators                   |



**Highest precedence at top, lowest at bottom, and operators in the same row have the same priority.**

#### 1) Associativity of operators of the same priority

Almost all operators with the same priority evaluate **left-to-right**.

However, exponent operator `**` has **right-to-left** associativity.

#### 2) Non-associative operators

Some operators like assignment operators and comparison operators do not have
associativity in Python.

There are separate rules for sequences of this kind of operator and cannot be expressed as associativity.



**Example**:

-   a < b < c neither means (a < b) < c nor a < (b < c).
-   It is equivalent to a < b and b < c, and is evaluated from left-to-right.
