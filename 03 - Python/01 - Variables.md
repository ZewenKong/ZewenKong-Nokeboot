# Lecture 1

## 00. Hello World !

```python
print("Hello World")
```



## 01. Variables and assignments

A variable is a reserved memory location storing values, the `=` sign is used to assign a value to a variable.

```python
name = "Zewen Kong" # a string
age = 18 # an integer assignment
height = 1.78 # a floating point assignment

print(name)
print(age)
print(height)
```



### 01.01. Chained assignment

Chained assignment 链式赋值, a series of statements with multiple targets for a single expression. And it is also possible to assign mutiple values to multiple variables in one line.

```python
a, b, c = 10, -80, "cat"

print(a)
print(b)
print(c)
```



### 01.02. Rules for naming variables

-   Variable name can be of any length, but in practice, the length should be reasonable (one letter, one word, a concatenation 连接 of words).

-   Case is significant.

-   A variable name can only contain alphanumeric 字母数字 characters and underscore, such as (a - z, A - Z, 0 - 9 and _).

-   Variable names must begin with a letter or underscore.
    -   '56_var' is not a valid variable name

-   A variable name cannot contain a space.
    -   'My var' is not a valid variable name

-   Variable names can contain unicode characters, but only those that can be mapped to characters in foreign written languages.

-   Python reserved words cannot be used as variable name.



### 01.03. Python reserved words list

Call the Python reseved words list:

```python
# Method 1
import keyword
print(keyword.kwlist)

# Method 2
help('keywords') # use an the interpreter
```



### 01.04. Re-declaring variables

Python is **dynamically typed**, when declaring a variable, it (Python) will bind it to its corresponding type during execution 运行.

In contrast, **statically typed** which expects its variables to be declared they can be assigned values.

==> 静态类型期望其变量被声明，它们可以被赋值

Python is also **strongly typed**, which variables cannot be implicitly concatenated 窜连 to unrelated types.



## 02. Code comments

### 02.01. Inline comments

**Python comments** ==> start with the hash character `#` , and extend to the end of the physical line.

A comment cannot appear within a string literal, a hash character `#` within a string literal is just a hash character.



### 02.02. Block comments

There is **no mechanism in Python to comment out blocks of code** (several lines of code), but **there is a fix by using the triple quote `"""` of docstrings**.

```python
"""
This is a multi-line comment with docstrings

print("Hello world")
print("Hello universe")
"""

print("Hello")
```



## 03. Indentation

```python
cities = ["Tokyo", "Oslo", "Dakar"]
for c in cities:
    if c == "Dakar":
        print("Found an african city.")
    print(".")
```



## 04. Basic data type

Python supports several built-in basic data types:

1. Integers
2. Floating point numbers
3. Comple numbers
4. Booleans
5. String



### 04.01. Integers

-   **Integers (ints)**, whole numbers with no decimal point.

-   **Ints** are signed, either positive or negative.

-   (In Python) **Ints** are 'theoretically' unlimited in size, however, the maximum size depends only on the available hardware memory.



### 04.02. Floating point numbers

-   **Floats** represent real number, contains a decimal point.

- A floating point number is accurate up to 15 decimal places, and floats can use the scientific notation (e.g. 144300 = 1.443E5).



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



### 04.03. Complex numbers

A combination of a real part `a` and an imaginary part `b` (`a` and `b` are floats).

===> e.g. `a + bj (j^2 = -1)`



### 04.04. Booleans 布尔值

**Booleans values are the constant True and False**, and Booleans are generally used to test whether a condition is True or False, generally used in loops and decision making.

```python
a = 12
print(a > 10)
print(a < 5)
```



### 04.05. Strings

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



### 04.06. `type()` function

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



### 04.07. `id()` function

`id()` function returns an integer which is the unique identifier of an object.

The **id** is garanteed to be unique and constant for this object during its lifetime.

Two objects with non-overlapping lifetimes may have the same `id()` value.



## 05. Type conversion

Python allows converting a value of one data type to another data type.

There are two types of conversion:

1. Implicit conversion,
2. Explicit conversion.



### 05.01. Implict type conversion

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



### 05.02. Explicit type conversion

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