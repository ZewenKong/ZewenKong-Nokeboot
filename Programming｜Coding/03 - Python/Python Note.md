# Lecture 1

## 1. Hello World !

```python
print("Hello World")
```

## 2. Variables and assignments

A variable is a reserved memory location storing values, the `=` sign is used to assign a value to a variable.

```python
name = "Zewen Kong" # a string
age = 18 # an integer assignment
height = 1.78 # a floating point assignment

print(name)
print(age)
print(height)
```

### 2.1 Chained assignment

Chained assignment 链式赋值, a series of statements with multiple targets for a single expression. And it is also possible to assign mutiple values to multiple variables in one line.

```python
a, b, c = 10, -80, "cat"

print(a)
print(b)
print(c)
```

### 2.2 Rules for naming variables

--------

-   Variable name can be of any length, but in practice, the length should be reasonable (one letter, one word, a concatenation 连接 of words).

-   Case is significant.

-   A variable name can only contain alphanumeric 字母数字 characters and underscore, such as (a - z, A - Z, 0 - 9 and _).

-   Variable names must begin with a letter or underscore.
    -   '56_var' is not a valid variable name

-   A variable name cannot contain a space.
    -   'My var' is not a valid variable name

-   Variable names can contain unicode characters, but only those that can be mapped to characters in foreign written languages.

-   Python reserved words cannot be used as variable name.

------

**Python reserved words list**

Call the Python reseved words list:

```python
# Method 1
mport keyword
print(keyword.kwlist)

# Method 2
help('keywords') # use an the interpreter
```

### 2.3 Re-declaring variables

Python is **dynamically typed**, when declaring a variable, it (Python) will bind it to its corresponding type during execution 运行.

In contrast, **statically typed** which expects its variables to be declared they can be assigned values.

==> 静态类型期望其变量被声明，它们可以被赋值

Python is also **strongly typed**, which variables cannot be implicitly concatenated 窜连 to unrelated types.

## 3. Code comments

### 3.1 Inline comments

**Python comments** ==> start with the hash character `#` , and extend to the end of the physical line.

A comment cannot appear within a string literal, a hash character `#` within a string literal is just a hash character.

### 3.2 Block comments

There is **no mechanism in Python to comment out blocks of code** (several lines of code), but **there is a fix by using the triple quote `"""` of docstrings**.

```python
"""
This is a multi-line comment with docstrings

print("Hello world")
print("Hello universe")
"""

print("Hello")
```

## 4. Indentation

```python
cities = ["Tokyo", "Oslo", "Dakar"]
for c in cities:
    if c == "Dakar":
        print("Found an african city.")
    print(".")
```

## 5. Basic data type

-----

Python supports several built-in basic data types:

1. Integers
2. Floating point numbers
3. Comple numbers
4. Booleans
5. String

-----

### 5.1 Integers

**Integers (ints)**, whole numbers with no decimal point.

**Ints** are signed, either positive or negative.

(In Python) **Ints** are 'theoretically' unlimited in size, however, the maximum size depends only on the available hardware memory.

### 5.2 Floating point numbers

**Floats** represent real number, contains a decimal point.

A floating point number is accurate up to 15 decimal places, and floats can use the scientific notation (e.g. 144300 = 1.443E5).

#### 1) Floating point arithmetic limitations 算术限制

Floating-point real numbers cannot be represented with exact precision due to hardware limitations.

```python
# Inaccuracy of floating point arithmetic
a = 1.2
b = 1.0
print(a - b)
```

>   Consequences

Small inaccuracies (of floating) may mean that `==` fails.

```python
a = 1.2
b = 1.0

if ((a - b) == 0.2):
    print("Do sth.")
print("done.")
```

>   To fix this problem

```python
a = 1.2
b = 1.0
e = 0.0000001 # epsilon

if (0.2 - e <= (a - b) <= 0.2 + e):
    print("Do sth.")
print("done.")
```

### 5.3 Complex numbers

A combination of a real part `a` and an imaginary part `b` (`a` and `b` are floats).

===> e.g. `a + bj (j^2 = -1)`

### 5.4 Booleans 布尔值

**Booleans values are the constant True and False**, and Booleans are generally used to test whether a condition is True or False, generally used in loops and decision making.

```python
a = 12
print(a > 10)
print(a < 5)
```

### 5.5 Strings

**Strings are the sequence of characters**, which are generally delimited 分隔 either using single quote `' '`or double quotes `" "`. And single quote and double quotes can be part of the string itself.

There is no built-in type for characters in Python, a character is just a string of length on.

#### 1) Escape sequences 转义序列 in strings

Some sequences of character (`' '`, `" "`, `\n`, ...) in Python, have a special meaning and are therefore interpreted 解释.

```python
# e.g. Line change \n
print("This is a first line.\nThis is a second line.")
```

However, special character can be disabled by using the **escape character** `\` (blackslash).

```python
print('Escaping the \' character.')
print('Escaping the \" character.')
print('Escaping the \\n character.')
```

>   Output

```markdown
Escaping the ' character.
Escaping the " character.
Escaping the \n character.
```

#### 2) Triple-quoted strings

**Triple-quoted strings are used to create multiline strings.** Delimited by matching groups of three single quotes `''' '''` or three double quotes `""" """`.

```python
print('''This is the first line.
This is the second line.
This is the third line.''')
```

>   Output

```markdown
This is the first line.
This is the second line.
This is the third line.
```

Single quote, double quotes and newline are not escaped 转译 (displaed verbatim 逐字显示).

```python
print('''This string has a single (') and a double (") quote.''')
```

>   Output

```markdowen
This string has a single (') and a double (") quote.
```

#### 3) String operators

| String operators | Description                                                  | Operation    |
| ---------------- | ------------------------------------------------------------ | ------------ |
| +                | Concatenates【连接】strA and strB                            | strA + strB  |
| *                | Duplicates the string n times                                | str*n        |
| []               | Slice - Return the character from the index provided at i    | str[i]       |
| [:]              | Range slice - Return the characters from the range provided at i:j (j not include) | str[i : j]   |
| in               | Membership - Return True if x exists in the string (can be multiple characters) | x in str     |
| not in           | Membership - Return True if x does not exist in the string (can be multiple characters) | x not in str |
| r                | Prevents an escape character from being rendered             | r"\a"        |
| %                | The format operator - Formats the string                     |              |

```python
strA = "Hello"
strB = "World!"

print(strA + strB)
print(strA * 3)
print(strA[2]) # l
print(strA[1:3]) # el
print('el' in strA) # True
print('hola' not in strA) # True
print(r"\n") # Disable newline
```

#### 4) The format operators `%`

The **format operator** is a **placeholder 占位符** that allows to replace parts of a string with data stored in variables, and the format operator is used along with a flag.

```python
# Example 1
days = 7
print("A week has %d days" %days)
```

```python
# Example 2
name = "Anna"
age = 22
height = 1.752
print("Your name is %s, your age is %d, and your height is %.2f" %(name, age, height))
```

-----

**Format operators flags**

- `%s`, String (or any object with a string representation, like numbers)
- `%d`, Integers
- `%f`, Floating point numbers
- `%.\<number of digits>f`, Floating point numbers with a fixed amount of digits to the right of the dot
- `%x/%X`, Integers in hex representation (lowercase/uppercase)

```python
# Example of %x/%X

num = 23423
print("The value of %d in hexadecimal is %X" %(num, num))
```

>   Output

```markdown
The value of 23423 in hexadecimal is 5B7F
```

### 5.6 `type()` function

Use to get the type of an object, and `type()` function is mostly used for debugging.

```python
print(type(True))
print(type(78.98 + 62))
```

>   Output

```markdown
<class 'bool'>
<class 'float'>
```

### 5.7 `id()` function

`id()` function returns an integer which is the unique identifier of an object.

The **id** is garanteed to be unique and constant for this object during its lifetime.

Two objects with non-overlapping lifetimes may have the same `id()` value.

## 6. Type conversion

Python allows converting a value of one data type to another data type.

-----

There are two types of conversion:

1. Implicit conversion,
2. Explicit conversion.

-----

### 6.1 Implict type conversion

The **implicit type conversion** done by Python automatically with no user involvement.

```python
a = 5
b = 3
c = a/b
print(c)
```

>   Output

```markdown
1.6666666666666667
```

**In order to avoid loss of data, Python always convert smaller data types into larger data types automatically.**

### 6.2 Explicit type conversion

The explicit conversion is also known as **casting (changing)**, and is done **using the predefined functions** (`int()`, `float()`, `str()`, `new_required_datatype(expression)`).

```python
a = 5
b = "3"
c = a + int(b)
print(c)
```

>   Output

```markdown
8
```

**The explicit conversion might cause loss of data** (e.g., when cast from float to integer).



# Lecture 2

## 1. Branching

### 1.1 Decision making

Python supports decision making through the use of `if`,  `elif` and `else` keywords.

### 1.2 `if` keyword

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

### 1.3 Conditions

-----

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

-----

### 1.4 Multiple conditions

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

### 1.5 Nested `if-elif-else`

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

## 2. Taking input from the user

### 2.1 Taking input from one user

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

### 2.2 Taking multiple inputs at a time

Use `split()` function to get multiple inputs at a time, the `split()` function can split the values entered based on the space between these values.

```python
x, y, z = input("Enter three values: ").split()
print("Total number:", x)
print("Number of Group 1:", y)
print("Number of Group 2:", z)
```

## 3. Operators

### 3.1 Arithmetic operators

| Operator | Description                                                  | Example                                    |
| -------- | ------------------------------------------------------------ | ------------------------------------------ |
| +        | Addition - Adds x to y                                       | x + y = 10                                 |
| -        | Subtraction - Subtract y from x                              | x - y = 10                                 |
| *        | Multiplication - Multiplies x with y                         | x * y = 100                                |
| /        | Division - Divides y be x                                    | y / x = 10                                 |
| %        | Modulus - Returns the remainder of the division of x by y    | y % x = 10                                 |
| **       | Exponent - Performs exponential(power) calculation on operators | x ** y = 100                               |
| //       | Floor Division - The division of operands where the result is the quotient in which the digits after the decimal point are removed. But if one of the operands is negative, the result is floored, rounded away from zero (towards negative infinity) | 9//2 = 4 and 9.0//2.0 = 4.0 and -9//2 = -5 |

### 3.2 Comparison operators

| Operator | Description                                                  | Example           |
| -------- | ------------------------------------------------------------ | ----------------- |
| ==       | If the values of two operands are equal, then the condition becomes **True** | (x == y) is False |
| !=       | If the values of two operands are not equal, them the condition becomes **True** | (x != y) is True  |
| >        | If the value of left operand is greater than the value of right operand, then condition becomes **True** | (x > y) is False  |
| <        | If the value of left operand is less than the value of right operand, then condition becomes **True** | (x < y) is True   |
| >=       | If the value of left operand is greater than or equal to the value of right operand, then condition becomes **True** | (x >= y) is False |
| <=       | If the value of left operand is less than or equal to the value of right operand, then condition becomes **True** | (x <= y) is True  |

### 3.3 Assignment operators

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

### 3.4 Logical operators

#### 1) Truth tables

**T stands for True, F stands for False**

-----

**Truth table for logical 'not'**

|  p   | not(p) |
| :--: | :----: |
|  T   |   F    |
|  F   |   T    |

------

**Truth table for logical 'and'**

|  p   |  q   | p and q |
| :--: | :--: | :-----: |
|  T   |  T   |    T    |
|  T   |  F   |    F    |
|  F   |  F   |    F    |
|  F   |  T   |    F    |

------

**Truth table for logical 'or'**

|  p   |  q   | p or q |
| :--: | :--: | :----: |
|  T   |  T   |   T    |
|  T   |  F   |   T    |
|  F   |  F   |   F    |
|  F   |  T   |   F    |

-----

#### 2) Logical operators

Logical operators operate on **logical values**

| Operator | Description                                                  | Example              |
| -------- | ------------------------------------------------------------ | -------------------- |
| and      | Logical AND - If both the operands are True then condition becomes True | (x and y) is False   |
| or       | Logical OR - If any of the two operands are non-zero then condition becomes True | (x or y) is True     |
| not      | Logical NOT - Used to reverse the logical state of its operand | not(x and y) is True |

### 3.5 Bitwise operators

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

### 3.6 Membership operators

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

### 3.7 Identity operators

| Operator   | Description                                                  |
| ---------- | ------------------------------------------------------------ |
| **is**     | Evaluates to **True** if the variables on either side of the operator point to the same object and **False** otherwise |
| **is not** | Evaluates to **False** if the variables on either side of the operator point to the same object and **True** otherwise |

### 3.8 Operators precedence 优先级

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

-----

**Example**:

-   a < b < c neither means (a < b) < c nor a < (b < c).
-   It is equivalent to a < b and b < c, and is evaluated from left-to-right.

-----



# Lecture 3

## 1. Loops

**Loop** is used to execute a task several times in order to achieve automation.

A loop allows to run a block of code several times, this block of is called **body of the loop**, and the number of times in controlled by a **control condition** (If the control condition is not set properly, the loop might run indefinitely 无限期地).

-----

There are two types of loops in Python:

1. **for** loops
2. **while** loops

-----

## 2. *for* loops

```python
for element in sequence:
    execute_loop_body
```

### 2.1 *for* loops iterating over sequential data types

The set of statements will be executed for each element of the sequence (a list, a tuple, a dictionary, a set, a range or a string).

-----

In python, the following are considered sequences:

* Lists

- Tuples
- Dictionaries
- Sets
- Strings

-----

```python
for i in "training":
    print("Current letter: " + i)
```

### 2.2 `range()` function

The `range()` function generates a **sequence of numbers** starting from a lower bound 'start' to the upper bound 'stop' ('stop' element is not included).

```markdown
range([start], stop, [step]) => range object range

# For example
(0, 7, 1) => start from 0, stop at 7, step 1
generates the sequence: 0, 1, 2, 3, 4, 5, 6 (7 not include)

[start] and [step] are optional (the default values are: start(0), steop(1))
```

### 2.3 *for* loops iterating over a `range()`

The `range()` function is commonly used with **for loops**.

```python
for i in range(0, 8, 1):
    print("2**" + str(i) + " = ", 2**i)
```

## 3. *while* loops

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

## 4. Infinite loops

A loop is said to be infinite if the stop condition is **never False**, so the loop never ends.

### 4.1 Intentional 故意的 infinite loop

Sometimes need a loop that never stops executing (e.g. a long-running server application like a Web server may need to continuously check for incoming connections) until we kill the process or close our python application.

```python
list = [1]
# infinite loop
for x in list:
    list.append(x + 1)
    print(x)
```

### 4.2 Unintentional infinite loops

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

## 5. Control statments in *for* and *while* loops

-----

- `break`
- `continue`
- `pass`

-----

### 5.1 `break`

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

### 5.2 `continue`

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

### 5.3 `pass`

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

## 6. for-else loop

If the `else` statement is used with a **for loop**, the `else` statement is executed when for has exhausted the list it is going through.

```python
for item in sequence:
    process(item)
    # no break
else:
    suite (a group of individual statements, which make a single code block)
```

## 7. while-else loop

If the `else` statement is used with a **while loop**, the `else` statement is executed when the condition becomes **False**.

```python
while condition:
    do something
else:
    suite
```

## 8. Nested loops

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

-----

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



# Lecture 4

## 1. Data structures

Data structures, are particular ways of storing data to make some operation easier or more efficient (tuned for certain tasks). And data structures are suited to solving certain problems, and they are often associated with algorithms.

-----

Python built-in data structures:

- Lists
- Tuples
- Sets
- Dictionaries

-----

Roughly two categories of data structures:

- **Built-in data structures**, data structures that are so common as to be provided by default by the programmig language, e.g. lists, tuples, etc.
- **User-defined data structures**, classes in object oriented programming that are designed for a particular task.

-----

## 2. List

A **list** is an ordered sequence of items, it is defined using square brackets `[ ]`, the empty list is created using an empty pair of square brackets (list may contain items of different types).

**Lists are mutable 可变的** (mutable means that the content can be changed).

```python
my_list = [1, 2, 3]
my_list[0] = 125
print(my_list)  # [125, 2, 3]
```

### 2.1 Accessing an element of a list by index

-----

- It is possible to access any element of a list by index
- Index in Python starts from 0
- Only integers are used for indexing
- The index of a list ranges from 0 to N-1 where N is the number of elements int he list. For example, a list containing 3 elements will have an index from 0 to 2
- Trying to access an element other that this will raise an IndexError

-----

```python
simpleList = [3, 'ok', 10.5, 'python', True]
print(simpleList[4])
```

### 2.2 Nested lists

Lists can contain other lists.

```python
nestedList = ['tree', [5, [19, 40, 60], 20], ['g']]
print(nestedList[1])
print((nestedList[1])[2])
print(nestedList[1][2])
```

>   Output

```markdown
[5, [19, 40, 60], 20]
20
20
```

Nested lists are accessed using nested indexing

Context solves the problem. Index always comes at the end and is preceded by something (a variable, a sequence).

### 2.3 Negative indexing

It is possible to use negative indexing with lists. The index of -1 refers to the last item, -2 to the second last item and so on.

```python
myList =['w', 'o', 'r', 'l', 'd']
print(myList[-1])  # d
print(myList[-2])  # l
```

### 2.4 Iterating over 遍历 the elements of a list

Can iterate through the elements of a list with a **for** loop.

```python
chemicalList = ['Oxygen', 'Carbon', 'Potassium', 'Zinc', 'Barium']
for i in chemicalList:
    print(i)
```

### 2.5 List methods

```python
myList = ['London','Oxford', 'Cambridge', 'Manchester', 'Cardiff', 'Birmingham','Cambridge', 'Manchester']

# return the length of a list
print(len(myList))

# print the content of a list
print(myList)

# add an element
myList.append('Birmingham')
print(myList)

# add an element at a specific location by index
myList.insert(1, 'York')
print(myList)

# remove an element
myList.remove('Birmingham')
print(myList)

# sort a list in ascending order, the result is put in the initial list 'myList'
myList.sort()
print(myList)

# reverse a list, result put in initial list 'myList'
myList.reverse()
print(myList)

# return the number of occurences of an element of a list
print(myList.count('Cambridge'))
print(myList.count('Bath'))

# return the lowest index of the element
# If not found, it raises a ValueError exception indicating the element is not in the list.
print(myList.index('Oxford'))
print(myList.index('Cambridge'))
print(myList.index('Tokyo')) # raises an error

# clear a list - remove all its elements
myList.clear()
print(myList)

# delete entire list
del myList
print(myList) # raises an error as no longer exists
```

### 2.6 Numeric lists methods

```python
nbList = [234, 55, 67, 7890, 10]
print(min(nbList))
print(max(nbList))
print(sum(nbList))
```

[Ohter lists methods of Python](https://docs.python.org/3/tutorial/datastructures.html?highlight=list) 

### 2.7 Note on List methods

Most of lists methods **do not return a value**, this is because lists are mutable, so the methods modify the list directly, no need to return anything.

```python
nbList = [4, 7, 1, 2]
nbList = nbList.sort()  # rearrange the list
print(nbList)
```

>   Output

```markdown
None
```

>   Explanation

The `sort` operation changed the order of the list in place (right side of assignment). Then the `sort` method returned `None`, which was assigned to the variable nbList.

### 2.8 List comprehensions 理解

List comprehensions provide a concise 简洁的 way to create lists. Common applications are to make new lists where each element is the result of some operations applied to each member of another sequence, or to create a subsequence of those elements that satisfy a certain condition.

-----

**Syntax of list comprehensions:**

- [expression for item in iterable if condition == True]

- The return value is a new list, leaving the old list unchanged

- The condition is optional

-----

```python
# Using a for loop
doubles = []
for i in range(7):
    doubles.append(i*2)
    
print(doubles)

# Using list comprehension
doubles = [i*2 for i in range(7)]
print(doubles)
```

```python
dissimilarPairs = [(x,y) for x in [1,2,3] for y in [3,1,4] if x != y]
print(dissimilarPairs)
```

>   Output

```markdown
[(1, 3), (1, 4), (2, 3), (2, 1), (2, 4), (3, 1), (3, 4)]
```

## 3. Tuples

Tuples are simply **immutable** lists, and tuples are written with parentheses `()`.

```python
t1 = (1, 2, 3)
print(type(t1))
```

Tuples may be input with or without surrounding parentheses, **although often parentheses are necessary** anyway (if the tuple is part of a larger expression).

```python
t2 = 1, 2, 3
```

Tuples may contain items of different data types.

```python
t3 = ('Hello', 23, (1, 2, 3))
```

Although immutable, tuples may contain mutable objects such as lists.

```python
t4 = (5, ['a', 'b', 'c'], 'ok')
```

### 3.1 Empty and single value tuples

```python
# Empty tuple
tup1 = ()
# Tuple for a single value
tup2 = (11,)
print(type(tup2))
```

### 3.2 Tuple packing and unpacking

In packing, place value into a new tuple.

In unpacking, extract those values back into variables.

```python
# tuple packing
x = ('Dell', 2000, 'Computing')
# tuple unpacking
(company, emp, activity) = x
print(company)
print(emp)
print(activity)
```

### 3.3 Reasons for using tuples

A tuple, as a separate type, an immutable list gives you a data structure with some integrity, some
permanent-ness of its content (cannot accidentally change one).

### 3.4 Lists and tuples

All methods that works with a list works with a tuple except methods that modify the tuple (since tuples are immutable). Thus indexing, len, print, all work as expected. However, none of the mutable methods work: append, extend, del of an element but itʼs possible to delete a whole tuple.

## 4. Sets

A set is an unordered collection with no duplicate elements.

Sets are written with curly brackets `{ }`

Sets can include elements of different datatypes

Basic uses include membership testing and eliminating duplicate entries

Set objects also support mathematical operations on sets such as union, intersection, difference, etc

The `set()` function can be used to create sets.

```python
mySet = {'January', 'February', 'March'}
print(mySet)
anotherSet = set()
print(anotherSet)
```

Create a set from a list using the `set()` method

```python
anotherSet = set(['a', 'b', 'c', 'b'])
print(anotherSet) # removes duplicates elements
```

Empty set

```python
mySet = set() # empty set
print(mySet)
```

**Set methods**

```python
basket = {'milk', 'chocolate', 'soap', 'pen', 'juice', 'milk', 'paper'}
print(basket) # show that duplicates have been removed
print('soap' in basket) # fast membership testing
print('butter' in basket)
# Demonstrate set operations on unique letters from two words
setA = set('abracadabra')
setB = set('alacazam')
print(setA) # unique letters in setA
#{'a', 'r', 'b', 'c', 'd'}
print(setB) # unique letters in setB
#{'m', 'z', 'c', 'l', 'a'}
print(setA - setB) # letters in a but not in setB
#{'r', 'd', 'b'}
print(setA | setB) # letters in either setA or setB
#{'a', 'c', 'r', 'd', 'b', 'm', 'z', 'l'}
print(setA & setB) # letters in both setA and setB
#{'a', 'c'}
print(setA ^ setB) # letters in setA or setB but not both --> symmetric difference
#{'r', 'd', 'b', 'm', 'z', 'l'}
```

## 5. Dictionary

A dictionary as an unordered set of `key: value` pairs, with the requirement that the keys are unique (within one dictionary).

==Dictionaries are written with curly braces== `{ }`

Placing a comma-separated 逗号分隔 list of `key:value` pairs within the braces adds initial `key:value` pairs to the dictionary; this is also the way dictionaries are written on output

The main operations on a dictionary are storing a value with some key and extracting the value given the key (字典的主要操作是用某个键存储一个值，并在给定键的情况下提取值)

And it is also possible to **delete** a `key:value` pair with `del`.

If you store using a key that is already in use, the old value associated with that key is forgotten (如果您使用已在使用的密钥进行存储，则与该密钥关联的旧值将被遗忘)

It is an error to extract a value using a non-existent key (使用不存在的键提取值是错误的)

The values of a dictionary can be of any type, but the keys must be of an immutable data type such as strings, numbers, or tuples (字典的值可以是任何类型，但键必须是不可变的数据类型，例如字符串、数字或元组)

The `dict()` function can also be used to create dictionaries

**Dictionary method**

```python
# create a dictionary
phoneBook = {'melissa': 4098, 'john': 4139}
# phoneBook = dic('melissa': 4098, 'john': 4139)

# add an key:value pair to the dictionary
phoneBook['andy'] = 4127
print(phoneBook)
print(phoneBook['melissa'])

# delete a key:value pair
del phoneBook['john']

# update the value of an existing key
phoneBook['melissa'] = 6789
print(phoneBook)

# get list of keys
print(list(phoneBook.keys()))

# sort list of keys
print(sorted(phoneBook.keys()))

# test if key exists in dictionary
print('andy' in phoneBook)
print('melissa' not in phoneBook) # False

# sort list of values
print(sorted(phoneBook.values()))
```

## 6. Summary

Mutable and immutable data types and datastructures in Python

**Immutable Datatypes**: 1) Number, 2) Strings, 3) Tuples

**Mutable Datatypes**: 1) Lists, 2) Dictionary, 3) Sets



# Lecture 5

## 1. Strings

A **string** in Python is a sequence of characters, a single character is simply a string with a length of 1 (Python does not have a character data type).

-----

**Declaring a string**, a string can be declared using single quotes `' '`, or double quotes `" "`.

-----

**Strings are arrays**, which strings characters can access by index, and the index of the first character in a string is 0.

```python
c = "linguistics"
print(c[2])
```

-----

**Negative indexing**, strings characters can also be accessed using negative indexes, the last character of the string being indexed -1.

-----

**String slicing**, to return part of a string (slice), it is possible to specify the start index and the end index, separated by a colon (known as the slicing syntax), and the character with the end index is not included in the slice.

-----

**String methods**

```python
my_string = " Sweet dreams are made of this. Who am I to disagree? "
# prints the original string
print(my_string)

# get the length of the string
print(len(my_string))

# remove the white characters at the beginning and the end of a string
print(my_string.strip())
# 首位空格移除
# Sweet dreams are made of this. Who am I to disagree?

# convert to upper case
print(my_string.upper())

# convert to lower case
print(my_string.lower())

# replace an existing substring with another substring
print(my_string.replace("dreams", "plans"))
# "plans" 替换 "dreams"
```

```python
# find a substring and returns the index of its first occurence
print(my_string.find("made"))

# returns the index of the first occurrence of the letter "m" when the search is done between position 5 and 13
# string.find(value, start, end)
print(my_string.find("m", 5, 13))

# if the value is not found, the find() method returns -1
print(my_string.find("apple"))

# find a substring and returns the index of its first occurence (similar to find)
print(my_string.index("made"))

# returns the index of the first occurrence of the letter "m" when the search is done between position 5 and 13
# string.index(value, start, end)
print(my_string.index("m", 5, 13))

# if the value is not found, the index() method raises an error
print(my_string.index("apple"))
```

The `index()` method is similar to `find()` method for strings. The only difference is that `find()` method returns -1 if the substring is not found, whereas `index()` throws an exception.

And string methods are case sensitive (`find('m')` will search small 'm' whereas `find('M')` will search for capital 'M').

-----

[All string methods](https://docs.python.org/3/library/stdtypes.html#textseq)

-----

**Strings are immutable**, as the string once created, cannot be changed.

```python
st = "Hello"
print(st.replace('H','B'))
print(st)
st[2] = 'r'
```

## 2. Functions

A function is a named section of a program that performs a specific task.

-----

**Reason for use functions**

When program as a big chunck of code, it is preferable to use functions for two main reasons:

1.   **Reusability 可重用性 **: Instead of rewriting the same functionality again and again, it is better to code that reusable part of the code as a function. The function can then be called whenever needed preventing duplicate code.
2.   **Abstraction**: you can use a function written by other developers without the need to know its internal working. Similarly, you can provide functions to others.

-----

**Creating a function**

```python
#General syntax
# Example function with no parameter
def function_name(): # def my_function():
    function_body # print("Hello World!")
```

-----

**Calling a function**

```python
my_function()
```

### 2.1 Function arguments

Several ways to specify the arguments of a function:

-   Required arguments
-   Default arguments
-   Keyword arguments
-   Variable-length arguments

### 2.2 Required arguments

A function can take zero to many parameters, if more than one parameter, they should be separated by a comma (order of the parameters is important).

**Function with one parameter**

```python
# Example function with one parameter
def my_function(name):
    print("Hello " + name)
my_function('Homer')
```

**Function with several parameter**

```python
# Example function with several parameters
def my_function(name, age):
    print("Hello %s. Your age is %d. " %(name, age))
my_function("Marge", 36)
```

**Data structures as parameters**

It is possible to use a data structure (string, list, dictionary, etc.) as the function parameter. The function will treat it as a data structure inside its body.

```python
# Example using a string
def my_function(sequence):
    for i in sequence:
        print(i)

my_function("Freedom")
```

```python
# Example using a list
def my_function(books):
    for i in books:
        print(i)

novels = ["Pride and Prejudice", "1984", "The Great Gatsby"]
my_function(novels)
```

```python
# Example using a dictionary
def my_function(devices):
    for i in devices:
        print("Brand: %s Model: %s "%(i, devices[i]))

mobile_phones = {
"Apple": "iPhone 14 Pro",
"Samsung": "Galaxy Z",
"Motorola": "Razr-Q4"
}
my_function(mobile_phones)
```

### 2.4 Default arguments

It is possible to create a function that takes a default argument.

If you specify a new value for the argument when calling the function, it will overwrite the default one.

If you don't specify the value of the parameter when calling the function, it will simply use the default one.

```python
def my_function(module = "Programming"):  # default value => module
    print("I am studying " + module)
my_function("Mathematics")  # a new value for the argument is created
my_function("Biology")
my_function()  # no specific value
```

>   Output

```markdown
I am studying Mathematics
I am studying Biology
I am studying Programming
```

### 2.5 Keyword arguments

Functions also accept arguments with the **key = value** syntax.

In this case, the order of the arguments does not matter.

```python
def my_function(name, age, course):
    print("The student is studying", course)

# note the order of the arguments
my_function( age = 23, course = "Computing", name = "John Doe")
```

### 2.6 Variable-length arguments

In Python, can pass a variable number of arguments to a function using special symbols.

There are two special symbols:

1.   `\*args` (non keyword arguments)

2.   `\**kwargs` (keyword arguments)

Use `*args` and `**kwargs` as **an argument when we are unsure about the number of arguments to pass in the functions**.



`*args`

Python has `*args` which allow to pass the variable number of non keyword arguments to functions.

In the function, we should use an asterisk `*` before the argument name to pass variable length arguments.

```python
def adder(*num): # *num, * several words(non keyword)
    total = 0
    for n in num:
        total = total + n
    print("Total:",total)
    
adder(3,5)
adder(4,5,6,7)
adder(1,2,3,5,6)
```

>   Output

```markdown
Total: 8
Total: 22
Total: 17
```



`**kwargs`

`**kwargs` allows us to pass the variable number of keyword arguments to the function.

In the function, we use the double asterisk `**` before the argument name to denote this type of argument.

```python
def my_function(**kwargs):
    for key, value in kwargs.items():
        print ("%s == %s" %(key, value))
        
my_function(first ='John', mid ='Smith', last='Doe')
```

>   Output

```markdown
first == John
mid == Smith
last == Doe
```

### 2.7 Return values

A function can return an object of any type (string, integer, float, etc), it can also return multiple values in the form of a python data structure (list, tuple, etc).

A function with no return value returns the python special object **None**.

```python
# a function returing an integer
def my_function(num1, num2):
    return num1 + num2

total = my_function(10, 20)
print(total)

# NOTE: that calling a fucntion without an explicit print() will still print the return value
# e.g
# my_function(10, 20) # will print 30
```

```python
def my_function():
    return "COMP0066"
my_function()
```

```python
# a function returing a list
def my_function(*words):
    word_list = []
    for w in words:
        word_list.append(w) # add items to the end of a given list
    return word_list

returned_list = my_function("London", "Paris", "Madrid")
print(type(returned_list))
print(returned_list)
```

>   Output

```markdown
<class 'list'>
['London', 'Paris', 'Madrid']
```

### 2.8 The *pass* statment with functions

When cannot provide an implementation to a function (details are not known yet), a ***pass*** statement can be used (**pass*** means does nothing and can be used as a placeholder).

```python
def my_function():
    pass
my_function()
```

## 3. Variable scope

-----

To solve the problem when several variables are declared with the same name (which one is going to be used):

-   Not all variables are accessible from all parts of our program.
-   Where a variable is accessible depends on where and how it is defined.
-   Call the part of a program where a variable is accessible its scope.

-----

### 3.1 LEGB scope rules

Scope rules specify which variables can be ''seen'' and therefore accessed

-----

The scope rules can be summarised as LEGB:

-   Local
-   Enclosing
-   Global
-   Built-in

-----

**The search order matters: 1st search - Local, then Enclosing, Global and Built-in.**

### 3.2 Global scope or module scope

**Global scope** is the **top-most scope** in a Python program, script, or module.

Global scope is searched after Local, and Enclosed, a name declared at Global scope, is not enclosed in a function

```python
var = 15 # var in the following is declared in Global scope
print(var)
```

**Note**: Global name declaration, a name must be defined before it is used.

### 3.3 Locol scope or function scope

Local scope, variables decalared inside a function and it is searched first.

```python
# local scope example
x = 150 #1
y = 170 #2

def fun(x): # 3, local scope created by the function
    y = 100 # 4
    print(x, y) # 5

fun(93) # 6
print(x, y) # 7
```

>   Output

```markdown
93 100
150 170
```

>   Explaination

**x** : for the `print` statement on line (#5), the parameter to the function (# 3), is the value of `x` that will be found first (# 1).

**y**: for the print statement on line (#5),  the definition of y (# 4) is found first, because that definition of `y` is Local to function.

`print` statment (# 7): Python cannot look inside of functions, so there is no Local scope at line #7, only global; thus, the definitions on lines #2 - #3 will be used for `x` and `y`.

### 3.4 Keyword global

A global variable can be declared in a function using the keyword global.

```python
# keyword global
def fun(): # 1
    global z # 2
    z = 100 # 3

fun() # 4
print(z) # 5
```

>   Output

```markdown
100
```

>   Explaination

Line #2 contains a global declaration of `z`, so `z` value can be seen on line #5.

**Must call the function (line #6)** ===> **Enter the function call**

```python
def fun():
    global h
    h = 100
    
# function is never called, thus, the variable h is never defined
print(h) # raise an error
```

### 3.5 Enclosing scope

Enclosing scope is created using **nested functions**, when searching for a variable, first search local, and then search enclosing scopes.

```python
# Enclosing scope example
e = 992 # 1

def fun(e): # 2
    f = 100 # 3
    def bar(): # 4
        print(e, f) # 5
    bar() # 6

fun(77) # 7
print(e) # 8
```

>   Output

```markdown
77 100
992
```

>   Explaination

To find `e` on line #5, first seach `bar()`, then `fun()`, where the paramete is found.

To find `f` on line #5, first seach `bar()`, then `fun()`, `f` found on line #5.

### 3.6 Built-in scope

If a name is not found using local, enclosing, or global, then the built-in names are searched.

Each line in the program below uses two built-in names.

```python
def abs(value):
# if this function is uncommented, it will be executed instead of the built-in one below
    return value * 3

# built-in scope
print(abs(-10))  # -30
print(len('spring'))  # 6
print(__name__)
```

**Find all built-in names using**

```python
print(dir(__builtins__))
```

### 3.7 No new scope

`for`, `while` blocks do not declare a new scope.

`if`, `elif`, or `else` blocks do not declare a new scope.

Variables defined in `if`, `elif`, or `else` block are in global scope, but only `if` the block is entered.

```python
# No new scope
v = 10 # 1
if v > 0: # 2
    c = 17 # 3
print(c) # 4
```

Print statment #4 finds `v` only because the condition on line #3 it **True**.

**If containing block not entered ⇒ variable not defined**.

If an `if`, `elif`, or `else` block is not entered, then a variable in the block will not be defined.

```python
# not needed not defined
a = -10 # 1
if a > 0: # 2
    b = 17 # 3

print(b) # 4 (raise an error)
```

Variable `b` will not be found on line #4 because the condition on line #2 is **False**.

This rule applies to `while` and `for` blocks also.



# Lecture 6

## 1. Exceptions handling

### 1.1 Exception

An exception 异常 is an anomalous 反常的 or exceptional 特殊的 condition requiring special processing – often disrupting the normal ow of program execution.

### 1.2 Examples of exception

-----

-   File not found
-   Divison by zero
-   Index out of range
-   [Built-in exception types](https://docs.python.org/3/library/exceptions.html#exception-hierarchy) in Python

-----

```python
# Division by zero

v = int(input("Enter a numeric value: "))
print("12 divided by your input value is " , 12/v)
print("Done") # can't be reached if exception occurs in previous code
```

```python
# Index out of range

myList = ["Red", "Green", "Blue"]
print(myList[4])
print("Done") # can't be reached if exception occurs in previous code
```

### 1.3 Handling an exception

Handling an exception is also known as catching an exception (when the code raises an exception, it must handle the exception immediately otherwise the application will terminates and quits).

Handling an exception means **putting the part of the code that might cause an error in a `try` block**, and handling the error when it occurs in an elegant way (as opposite to let your application simply terminates).

In Python, exceptions are handled using the **`try-except-else-finally`**.

#### 1) Using *except* with or without the generic 通用的 exception

Useful if you cannot expect which type of exception might occur - **Exception** is the **generic exception**.

```python
try:
    # Code that might raise an error
except:
    # If there is Exception, then execute this block.
```

>   Can also be programed like:

```python
try:
    # Code that might raise an error
except Exception:
    # If there is Exception, then execute this block.
```

>   Real example

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except:
    print("You entered an invalid value.")
    
print("Done")
```

#### 2) Using specific exceptions

Use when you know exactly which exception might occur. However, if the code raises a different type of exception than the one specied after 'except', it won't be handled.

**Zero Divison Error**

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except ZeroDivisionError:
    print("You entered a zero. Cannot divide by zero.")
```

**Value Error**

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except ValueError:
    print("You entered an invalid numeric value.")
```

#### 3) Handling several types of exceptions

Use when treating each type of exception differently.

```python
# General syntax
try:
    # Code that might raise an error
except ExceptionA:
    # If there is ExceptionA, then execute this block.
except ExceptionB:
    # If there is ExceptionB, then execute this block.
```

>   Real example

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except ZeroDivisionError:
    print("You entered a 0. Cannot divide by 0.")
except ValueError:
    print("You entered a non-numeric value.")
```

#### 4) Argument of an exception

Get more information about the exception using the syntax:

 `Exception as e` OR `Exception Type as e`

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except ZeroDivisionError as e:
    print("You entered an invalid value.", e)
```

>   Output

```markdown
Enter a numeric value: 0
You entered an invalid value. division by zero
```

#### 5) Difference between generic and specific exceptions

```python
try:
    myList = ["Red", "Green", "Blue"]
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
    print(myList[v])
except Exception:
    print("An exception occured.")
except ZeroDivisionError:
    print("You entered a 0. Cannot divide by 0.")
except ValueError:
    print("You entered a non-numeric value.")
```

>   Output

```markdown
Enter a numeric value: 0
An exception occured.
```

>   Explaination

**Using a generic Exception before the specific ones will hide their effect**, because it catches all kinds of exceptions. So the output is "An exception occurred".

The generic exception should be caught last.

>   Fix

```python
# The right way to mix between specific and generic exceptions
try:
    myList = ["Red", "Green", "Blue"]
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
    print(myList[v])
except ZeroDivisionError:
    print("You entered a 0. Cannot divide by 0.")
except ValueError:
    print("You entered a non-numeric value.")
except Exception:
    print("An exception occured.")
```

#### 6) The *else* keyword

The *`else`* block **executes when no exception occurs**.

```python
# general syntax
try:
    # Code that might raise an error
except ExceptionA:
    # If there is ExceptionA, then execute this block.
else:
    # If there is no exception then execute this block.
```

>   Real example

```python
try:
    v = int(input("Enter a numeric value: "))
    print("12 divided by your input value is " , 12/v)
except ZeroDivisionError as e:
    print("You entered an invalid value.", e)
else:
    print("Thank you for using the calculator. Bye!")
```

#### 7) The *finally* keyword

The ***finally* block can be used** with a try to include code that **must be executed in all cases**; whether the try block raised an exception or not.

Generally used to release external resources; such as closing database connections, closing open les, etc. The finally block is sometimes called 'clean-up code'.

```python
try:
    myFile = open("listOfStudents.txt", "w")
    myFile.write("John Smith")
finally:
    myFile.close()
```

#### 8) Unified try/ except/ else/ finally

```python
try:
    try-block
except ExceptionA:
    handler-A
except ExceptionB:
    handler-B
else:
    else-block
finally:
    finally-block
```

A single `try` statement can have multiple `except` statements - this is useful when the `try` block contains statements that may throw different types of exceptions.

Can provide a generic except clause, which handles any exception.

Can include an `else` block. The code in the `else` block executes if the code in the `try` block does not raise an exception (当 `try` block 没有任何错误产生, 执行 `else` block).

Can include a `finally` block to contain the code that should be executed in all cases (exception occurs or not).

## 2. Files

Files are a useful way to store data in a persistent way, persistence allows your data to remain on disk when you close your Python application.

-----

Working with files in Python consists of three main steps:

1.   Open a file
2.   Perform read, write or append operation
3.   Close the file

-----

```python
# Open a file
my_file = open("mydata.txt", "r")

# code to work with the file
# ...

# Close the file
my_file.close()
```

### 2.1 File types

-----

Python distinguishies between two types of files:

1.   Text files
2.   Binary files "non-text files"

-----

#### 1) Text files

A text file is a file which stores sequences of characters using an encoding like utf-8, latin1 etc., whereas in the case of binary file data is stored in the same format as in computer memory.

-----

**Examples of text files:**

-   Web standards: html, XML, CSS, JSON etc.
-   Source code: py, c, app, java etc.
-   Documents: txt, tex, RTF etc.
-   Tabular data: csv, tsv etc.
-   Conguration: ini, cfg, reg etc

-----

#### 2) Binary files

On storage media both types of files (text files and binary files) are stored as a sequence of 0s and 1s.

The only difference is that when a text file is opened the data is decoded back using the same encoding scheme they were encoded in. However, in the case of binary files no such thing happens.

-----

**Example of binary files:**

-   Document files: .pdf, .doc, .xls etc.
-   Image files: .png, .jpg, .gif, .bmp etc.
-   Video files: .mp4, .3gp, .mkv, .avi etc.
-   Audio files: .mp3, .wav, .mka, .aac etc.
-   Database files: .mdb, .accde, .frm, .sqlite etc.
-   Archive files: .zip, .rar, .iso, .7z etc.
-   Executable files: .exe, .dll, .class etc.

-----

### 2.2 File attributes

**file.name** - returns the name of the file

**file.closed** - returns true if the file is closed, false otherwise

**file.mode** - returns the access mode with which file was opened

```python
my_file = open("mydata.txt", "r")

# *file.name* - returns the name of the file.
print ("File name: ", my_file.name)

# *file.closed* - returns true if the file is closed, false otherwise.
print ("Is file closed? ", my_file.closed)

# *file.mode* - returns the access mode with which file was opened.
print ("Opening mode : ", my_file.mode)
my_file.close()
```

### 2.3 *open()* method

The `open()` method creates a file object, which would be used to call other methods associated with it.

A file can be opened in different access modes: Read, Write and Append.

If not specified, the default access mode is read `r`.

### 2.4 File access modes

**r**: Opens a file for reading only. This is the default mode.

**rb**: Opens a file for reading only in binary format.

**r+**: Opens a file for both reading and writing.

**rb+**: Opens a file for both reading and writing in binary format.

**w**: Opens a file for writing only. Overwrites the file if the file exists. If the file does not exist, creates a new file for writing.

**wb**: Opens a file for writing only in binary format. Overwrites the file if the file exists. If the file does not exist, creates a new file for writing.

**w+**: Opens a file for both writing and reading. Overwrites the existing file if the file exists. If the file does not exist, creates a new file for reading and writing.

**wb+**: Opens a file for both writing and reading in binary format. Overwrites the existing file if the file exists. If the file does not exist, creates a new file for reading and writing.

**a**: Opens a file for appending. If the file does not exist, it creates a new file for writing.

**ab**: Opens a file for appending in binary format. If the file does not exist, it creates a new file for writing.

**a+**: Opens a file for both appending and reading. The file opens in the append mode. If the file does not exist, it creates a new file for reading and writing.

**ab+**: Opens a file for both appending and reading in binary format. If the file exists. The file opens in the append mode. If the file does not exist, it creates a new file for reading and writing.

### 2.5 Accessing to files

#### 1) Writing strings to files

```python
f = open("mydata.txt","w")
f.write("Some text\n another text")
f.close()
```

#### 2) Writing lines to files

```python
lines = ["This is my FIRST line.\n", "This is my SECOND line.\n", "This is my THIR
D line.\n"]
f = open("mydata.txt","w")#
f.writelines(lines)
f.close()
```

#### 3) Appending to a file

```python
f = open("mydata.txt","a")
f.write("This is my APPENDED line.\n")
f.close()
```

### 2.6 Accessing to binary files

#### 1) Writing to binary files

**bytearray()** is a Python built-in function that return a new array of bytes.

The bytearray type is a mutable sequence of integers in the range 0 <= num < 256.

[More on bytearray()](https://docs.python.org/3/library/functions.html#func-bytearray)

```python
f = open("mybin_file.bin","wb")
num_list = [3, 15, 21, 37, 45]
arr_integers = bytearray(num_list)

f.write(arr_integers)
f.close()
```

#### 2) Reading a binary files

```python
f = open("mybin_file.bin","rb")
num_list = list(f.read())
print(num_list)
f.close()
```

#### 3) Appending to a binary file

```python
f = open("mybin_file.bin","ab")
num_list = [100, 100, 100]
arr_integers = bytearray(num_list)

f.write(arr_integers)
f.close()
```

### 2.7 *close()* method

When a file is no longer needed, it is a good practice to close it.

When a file is closed, it can't be read or written.

-----

Reason for closing files when they are not needed:

-   Changes to files in Python such as edits do not go into effect until after the le is closed.
-   Too many files open means more used RAM space causing a slow down of the system.
-   Operating systems have a limit on the number of files that can be opened simultaneously.

-----

# Lecture 7

## 1. Object-Oriented Programming

### 1.1 Evolution of programming languages

#### 1) Low level - Genesis

Initially, computers were hard-wired or soft-wired and then later programmed using binary code that represented control sequences fed to the computer CPU (Central Processing Unit).

This was difficult and error-prone. Programs written in binary are said to be written in machine code, which is a very low-level programming paradigm. Hard-wired, soft-wired, and binary programming are considered first generation languages.

[More information](https://www.computerhope.com/issues/ch000984.htm)

#### 2) Low level - Assenbly language

To make programming easier, assembly languages were developed.

These replaced machine code functions with mnemonics and memory addresses with symbolic labels.

Assembly language programming is considered a low-level paradigm although it is a 'second generation' paradigm.

Assembly languages of the 1960s eventually supported libraries and quite sophisticated conditional macro generation.

```assembly
## Function int fibonacci (int n) in MIPS assembly
fibonacci:
addi $sp, $sp, -12
sw $ra, 8($sp)
sw $s0, 4($sp)
sw $s1, 0($sp)
move $s0, $a0
li $v0, 1 # return value for terminal condition
ble $s0, 0x2, fibonacciExit # check terminal condition
addi $a0, $s0, -1 # set args for recursive call to f(n-1)
jal fibonacci
move $s1, $v0 # store result of f(n-1) to s1
addi $a0, $s0, -2 # set args for recursive call to f(n-2)
jal fibonacci
add $v0, $s1, $v0 # add result of f(n-1) to it
fibonacciExit:
lw $ra, 8($sp)
lw $s0, 4($sp)
lw $s1, 0($sp)
addi $sp, $sp, 12
jr $ra
## End of function fibonacci
```

#### 3) Use of assembly language

Assembly was, and still is, used for time-critical systems and frequently in embedded systems.

Assembly programming can directly take advantage of a specific computer architecture and, when written properly, leads to highly optimized code.

However, it is bound to this architecture or processor and thus suffers from lack of portability.

#### 4) High level languages

A programming language that enables a programmer to write programs that are more or less independent of a particular type of computer.

Such languages are considered high-level because they are closer to human languages and further from machine languages. Easier to read, write, and maintain.

Must be translated into machine language by a compiler or interpreter.

Ada, Algol, BASIC, COBOL, C, C++, FORTRAN, LISP, Pascal, Java and Python.

```python
# Program to display the Fibonacci sequence up to n-th term where n is provided by the user
nterms = int(input("Enter a positive value: "))

# first two terms
n1 = 0
n2 = 1
count = 0

# check if the number of terms is valid
if nterms <= 0:
    print("Please enter a positive integer")
elif nterms == 1:
    print("Fibonacci sequence up to",nterms,":")
    print(n1)
else:
    print("Fibonacci sequence up to",nterms,":")
    while count < nterms:
        print(n1,end=' , ')
        nth = n1 + n2
        # update values
        n1 = n2
        n2 = nth
        count += 1
```

## 2. Object-oriented programming paradigm

Object-oriented programming (OOP) is a programming paradigm that uses "objects" – data structures encapsulating data fields and procedures together with their interactions – to design applications and computer programs.

Invented with the creation of the **Simula language**, then object-oriented programming is integrated into C language, and the resulting language was called C++.

Furthermore, a simple version of C++ was developed, which called JAVA. And many modern programming languages now support OOP including python.

Python object-oriented programming (discussing OOP, for better program design and better modularisation), the concept of OOP in Python focuses on creating reusable code.

## 3. Class

-----

Example to explain Class:

-   A class is to an Object what a blueprint is to (a house)
-   A class establishes the characteristics and the behaviors of the object
-   Classes are the plan; objects are the embodiment of that plan
-   Many houses can be built from the same blueprint.

-----

```python
# Example of a simple class

class House:
    pass # an empty block
```

When first add a class, might not be ready to add its entire contents. In Python we use the `pass` keyword (a statement) to indicate that nothing happens.

## 4. Object

h1 is an instance of class (House) <===> h1 is an object of type (House)

```python
# Creating an instance of a class (an object)

h1 = House()
```

-----

An object has two characteristics:

-   Attributes (variables)
-   Behaviour (methods)

-----

## 5. Methods

Classes can have methods just like functions except that we have an extra `self` parameter

```python
class Person:
    def say_hi(self):
        print('Hi, how are you?')

p = Person()
p.say_hi()

# The previous 2 lines can also be written as
# Person().say_hi()
```

Notice that the `say_hi()` method takes no parameters but still has the `self` in the function definition.

### 5.1 The `self` parameter

The `self` parameter is a reference to the current instance of the class.

It is named self by convention, technically, you can it whatever you like, but it has to be the first parameter of any function in the class. It is important to note that if you replace **self** with another word, it will decrease the readability of your code.

### 5.2 The `__init__` method

There are many method names which have special significance in Python classes.

The `__init__` method is an example. 

The `__init__` method is run as soon as an object of a class is instantiated 实例化  (i.e. created).

The method is useful to do any initialisation (i.e. passing initial values to your object) you want to do with your object. Notice the **double underscores** both at the beginning and at the end of the name.

```python
class Person:
    def __init__(self, name):
        self.name = name
    def say_hi(self):
        print('Hello, my name is', self.name)

p = Person("Adam")
p.say_hi()
# The previous 2 lines can also be written as
# Person("Adam").say_hi()
```

### 5.3 Class and object variables

**Class variables** are shared - they can be accessed by all instances of that class.

-----

Class Variables - A class variable is a variable that is declared inside of **class**, but outside of any instance method or `__init__()` method.

-----

There is only one copy of the class variable and when any one object makes a change to a class variable, that change will be seen by all the other instances.



**Object variables** are owned by each individual **object/instance** of the class.

-----

Instance variables are owned by instances of the class.

This means that for each object or instance of a class, the instance variables are different.

Unlike class variables, instance variables are defined within methods.

-----

In this case, each object has its own copy of the field **i.e.** they are not shared and are not related in any way to the field by the same name in a different instance.

```python
class Robot:
    """Represents a robot, with a name."""
    # A class variable, counting the number of robots
    population = 0
    
    def __init__(self, name):
        """Initializes the data."""
        self.name = name
        print("(Initializing {})".format(self.name))
        
        # When this robot is created, the robot
        # adds to the population
        Robot.population += 1
    def die(self):
        """I am dying."""
        print("{} is being destroyed!".format(self.name))

        Robot.population -= 1
        
        if Robot.population == 0:
            print("{} was the last one.".format(self.name))
        else:
            print("There are still {:d} robots working.".format(Robot.population))
    def say_hi(self):
        """ Greeting by the robot """
        print("Greetings, my name is {}.".format(self.name))
```

```python
droid1 = Robot("Alpha5")
droid1.say_hi()
droid2 = Robot("HK-47")
droid2.say_hi()

print("\nRobots can do some work here.\n")

print("Robots have finished their work. So let's destroy them.")
droid1.die()
droid2.die()
```

### 5.4 Class and object methods

```python
class Robot:
    """Represents a robot, with a name."""
    # A class variable, counting the number of robots
    population = 0
    def __init__(self, name):
        """Initializes the data."""
        self.name = name
        print("(Initializing {})".format(self.name))
        
        # When this robot is created, the robot
        # adds to the population
        Robot.population += 1
        
    def die(self):
        """I am dying."""
        print("{} is being destroyed!".format(self.name))
        Robot.population -= 1
        
        if Robot.population == 0:
            print("{} was the last one.".format(self.name))
        
        else:
            print("There are still {:d} robots working.".format(Robot.population))
    def say_hi(self):
        """ Greeting by the robot """
        print("Greetings, my name is {}.".format(self.name))
        
    @classmethod #class methods belong to the class not the object
    def how_many(cls):
        """Prints the current population."""
        print("We have {:d} robots.".format(cls.population))
```

```python
droid1 = Robot("Alpha5")
droid1.say_hi()
Robot.how_many() #calling a class method

droid2 = Robot("HK-47")
droid2.say_hi()
Robot.how_many()

print("\nRobots can do some work here.\n")

print("Robots have finished their work. So let's destroy them.")
droid1.die()
droid2.die()

Robot.how_many()
```

**Instance methods** take `self` as **mandatory** parameter, while **Class methods** take `cls` (cls referred as class) as mandatory parameter.

`Class methods are decorated with <b> @classmethod </b>`

### 5.5 Access control to class variables and methods

Technically, Python doesn't enforce access control. It does it by convention only.

**Public**: Meaning the class variable and methods can be accessed from any other class. 

`_` single underscore (don't expose).

`__ `double underscore (hide) to define private members.

All class variables and methods are public by default in Python.

### 5.6  Private variables and methods

```python
class Cup:
    def __init__(self):
        self.color = None # public variable
        self._content = None # protected variable
        self.__shape = "round" # private variable
     
    def fill(self, beverage):
        self._content = beverage
    def empty(self):
        self._content = None
    def setShape(self, shape):
        self.__shape = shape

redCup = Cup()
redCup.color = "red"
redCup._content = "tea"
redCup.empty()
redCup.fill("coffee")
redCup.setShape("square")

print(redCup.color) # red
print(redCup._content) # coffee
# print(redCup.__shape) # ERROR

print(redCup._Cup__shape)
```

Python supports a technique called name **mangling**

Any identifier of the form `__spam` is textually replaced with `_classname__spam`, where classname is the current class name. 

**Name mangling** is used to ensure that subclasses don't accidentally override the private methods and attributes of their superclasses. 

### 5.7 Static method

```python
import math
class CookieCake:
''' A class creating cookies '''
    def __init__(self, radius, ingredients):
        self.radius = radius
        self.ingredients = ingredients

    def area(self):
        return self.circle_area(self.radius)
    
    @staticmethod
    def circle_area(r):
        return r ** 2 * math.pi

c = CookieCake(13, ['flour', 'chocolate', 'eggs'])

print(c.area())
print(c.ingredients)

print(CookieCake.circle_area(10))
```

Marked with a `<b> @staticmethod <b>` decorator to flag it as a static method.

This type of method takes neither a `self` nor a `cls` parameter (but of course itʼs free to accept an arbitrary number of other parameters).

Therefore a **static method** can neither modify **object state** nor **class state**. **Static methods** are restricted in what data they can access

It is present in a class because it makes sense for the method to be present in class.

Create static methods to create utility functions as they are not tied to an object life cycle usually.

## 6. Summary of methods

```python
class Date():
    def __init__(self, day=0, month=0, year=0):
        self.day = day
        self.month = month
        self.year = year
    def getYear(self):
        return self.year
    
    @classmethod
    def from_string(cls, date_as_string):
        day, month, year = map(int, date_as_string.split('-'))
        # cls() create an instance of the current class
        date = cls(day, month, year)
        return date
    
    @staticmethod
    def is_date_valid(date_as_string):
        day, month, year = map(int, date_as_string.split('-'))
        return day <= 31 and month <= 12 and year <= 3999

myDate = Date.from_string('19-11-2019')
#myDate = Date(17,5, 2012) # Creating an instance the common way
print(myDate.getYear())
is_date = Date.is_date_valid('5-4-2022')
print(is_date)
```

```python
# The map function
def getLen(a):
    return len(a)

result = map(getLen, ('January', 'February', 'March'))
print(result)
#convert the map into a list, for readability
print(list(result))
```

**Instance methods** need an object (a class instance ) and can access the instance through `self`.

(实例方法需要一个对象（一个类实例）并且可以通过 `self` 访问实例)

**Class methods** do not need a class instance. They can not access the instance (self) but they have access to the class itself via `cls`.

(类方法不需要类实例, 他们无法访问实例 (self), 但他们可以通过 `cls` 访问类本身)

**Static methods** do not have access to `cls` or `self`. They work like regular functions but are defined as part of a class.

Generally use **class** method to create factory methods. Factory methods return class object ( similar to a constructor for different use cases).

Generally use **static** methods to create utility functions

## 7. Inheritance

**Inheritance** (fundamental object-oriented technique), used to organise and create reusable classes.

Inheritance allows a software developer to derive a new class from an existing one.

The **existing class** is called the **parent class**, or superclass.

The **derived class** is called the **child class** or subclass.

That is, the child class inherits the methods and data defined for the parent class To tailor a derived class, can add new variables or methods, or can modify the inherited ones.

### 7.1 Inheritance in action

```python
class UniversityMember:
'''Represents any university member.'''
    def __init__(self, name, age):
        self.name = name
        self.age = age
        print('(Initialised UniversityMember: {})'.format(self.name))

    def tell(self):
    '''Tell my details.'''     
        print('Name:"{}" Age:"{}"'.format(self.name, self.age), end=" ")

class AdminStaff(UniversityMember):
'''Represents an AdminStaff.'''
    def __init__(self, name, age, salary):
        UniversityMember.__init__(self, name, age)
        self.salary = salary
        print('(Initialised AdminStaff: {})'.format(self.name))

    # overriding method
    def tell(self):
        UniversityMember.tell(self)
        print('Salary: "{:d}"'.format(self.salary))

class Student(UniversityMember):
'''Represents a student.'''
    def __init__(self, name, age, grade):
        UniversityMember.__init__(self, name, age)
        self.grade = grade
        print('(Initialised Student: {})'.format(self.name))

    # overriding method
    def tell(self):
        UniversityMember.tell(self)
        print('Grade: "{:d}"'.format(self.grade))
```

```python
l = AdminStaff('Mr. Smith', 58, 30000)
s = Student('Lena', 21, 75)
#l.tell()
#s.tell()
```

>   Explaination

To use inheritance, specify the base class names in a tuple following the class name in the class definition.

The `__init__` method of the base class is explicitly called using the `self` variable so that can initialise the base class part of an instance in the subclass.

Since defining an `__init__` method in **AdminStaff** and **Student subclasses**, Python does not automatically call the init of the base class **UniversityMember**, you have to explicitly call it yourself.

In contrast, if we have not defined an `__init__` method in a subclass, Python will call the init of the base class automatically.

While we could treat instances of **AdminStaff** or **Student** as we would an instance of **UniversityMember** and access the `tell()` method of **UniversityMember** by simply typing `AdminStaff.tell()` or `Student.tell()`, we instead define another `tell()` method in each subclass (using the tell() method of **UniversityMember** for part of it) to tailor it for that subclass. Because we have done this, when we write `AdminStaff.tell()`, Python uses the `tell()` method for that subclass vs the superclass.

However, if we did not have a `tell` method in the subclass, Python would use the `tell()` method in the superclass.

Python always starts looking for methods in the actual subclass type first, and if it doesnʼt find anything, it starts looking at the methods in the subclass' base classes, one by one in the order they are specified in the tuple (here we only have 1 base class, but you can have multiple base classes) in the class definition.

A note on terminology - if more than one class is listed in the inheritance tuple, then it is called multiple inheritance.

### 7.2 Type of inheritance

**Simple inheritance**

Class A <== Class B

**Multilevel inheritance**

Class A <== Class B <== Class C

**Multiple inheritance**

Class A <== Class C / Class B <== Classs C

## 8. Method overriding

```python
class BaseClass():
    def __init__(self):
        self.value = 4
    def get_value(self): # overriden method
        return self.value

class Subclass(BaseClass):
    def get_value(self): # overriding method
        return self.value * 2

sb = Subclass()
print(sb.get_value())
```

Overriding is the property of a class to change the implementation of a method provided by one of its base classes.

Method overriding is thus a part of the inheritance mechanism.

In Python method overriding occurs by simply **defining in the child class a method with the same name of a method in the parent class**.

The Object class Note: In Python, Object is the base class from which all other classes are derived.



# Lecture 8

## 1. Module

-----

A module is a file consisting of Python code (.py file).

A module file groups related functionality you want to include in your application.

