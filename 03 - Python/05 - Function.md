# Lecture 5

## 01. Strings

-   A **string** in Python is a sequence of characters, a single character is simply a string with a length of 1 (Python does not have a character data type).

-   **Declaring a string**, a string can be declared using single quotes `' '`, or double quotes `" "`.

-   **Strings are arrays**, which strings characters can access by index, and the index of the first character in a string is 0.

```python
c = "linguistics"
print(c[2])
```

-   **Negative indexing**, strings characters can also be accessed using negative indexes, the last character of the string being indexed -1.

-   **String slicing**, to return part of a string (slice), it is possible to specify the start index and the end index, separated by a colon (known as the slicing syntax), and the character with the end index is not included in the slice.



### 01.01. String methods

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

-   The `index()` method is similar to `find()` method for strings. The only difference is that `find()` method returns -1 if the substring is not found, whereas `index()` throws an exception.

-   And string methods are case sensitive (`find('m')` will search small 'm' whereas `find('M')` will search for capital 'M').

-   [All string methods](https://docs.python.org/3/library/stdtypes.html#textseq)



### 01.02. Strings are immutable, 

as the string once created, cannot be changed.

```python
st = "Hello"
print(st.replace('H','B'))
print(st)
st[2] = 'r'
```



## 02. Functions

A function is a named section of a program that performs a specific task.



#### 1) Reason for use functions

When program as a big chunck of code, it is preferable to use functions for two main reasons:

1.   **Reusability 可重用性 **: Instead of rewriting the same functionality again and again, it is better to code that reusable part of the code as a function. The function can then be called whenever needed preventing duplicate code.
2.   **Abstraction**: you can use a function written by other developers without the need to know its internal working. Similarly, you can provide functions to others.



#### 2) Creating a function

```python
#General syntax
# Example function with no parameter
def function_name(): # def my_function():
    function_body # print("Hello World!")
```



#### 3) Calling a function

```python
my_function()
```



### 02.01. Function arguments

Several ways to specify the arguments of a function:

-   Required arguments
-   Default arguments
-   Keyword arguments
-   Variable-length arguments



### 02.02. Required arguments

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



### 02.03. Default arguments

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



### 02.04. Keyword arguments

Functions also accept arguments with the **key = value** syntax.

In this case, the order of the arguments does not matter.

```python
def my_function(name, age, course):
    print("The student is studying", course)

# note the order of the arguments
my_function( age = 23, course = "Computing", name = "John Doe")
```



### 02.05. Variable-length arguments

In Python, can pass a variable number of arguments to a function using special symbols.

There are two special symbols:

1.   `\*args` (non keyword arguments)

2.   `\**kwargs` (keyword arguments)

Use `*args` and `**kwargs` as **an argument when we are unsure about the number of arguments to pass in the functions**.



|`*args`|

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



|`**kwargs`|

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



### 02.06. Return values

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



### 02.07. The `pass` statment with functions

When cannot provide an implementation to a function (details are not known yet), a `pass` statement can be used ( `pass` means does nothing and can be used as a placeholder).

```python
def my_function():
    pass
my_function()
```



## 03. Variable scope

To solve the problem when several variables are declared with the same name (which one is going to be used):

-   Not all variables are accessible from all parts of our program.
-   Where a variable is accessible depends on where and how it is defined.
-   Call the part of a program where a variable is accessible its scope.



### 03.01. LEGB scope rules

Scope rules specify which variables can be ''seen'' and therefore accessed

The scope rules can be summarised as LEGB:

-   Local
-   Enclosing
-   Global
-   Built-in

The search order matters: 1st search - Local, then Enclosing, Global and Built-in.



### 03.02. Global scope or module scope

**Global scope** is the **top-most scope** in a Python program, script, or module.

Global scope is searched after Local, and Enclosed, a name declared at Global scope, is not enclosed in a function

```python
var = 15 # var in the following is declared in Global scope
print(var)
```

**Note**: Global name declaration, a name must be defined before it is used.



### 03.03. Locol scope or function scope

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



### 03.04. Keyword global

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



### 03.05. Enclosing scope

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



### 03.06. Built-in scope

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

Find all built-in names using

```python
print(dir(__builtins__))
```



### 03.07. No new scope

-   `for`, `while` blocks do not declare a new scope.

-   `if`, `elif`, or `else` blocks do not declare a new scope.

-   Variables defined in `if`, `elif`, or `else` block are in global scope, but only `if` the block is entered.

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