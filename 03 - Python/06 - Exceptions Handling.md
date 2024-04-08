# Lecture 6

## 01. Exceptions handling

### 01.01. Exception

An exception 异常 is an anomalous 反常的 or exceptional 特殊的 condition requiring special processing – often disrupting the normal ow of program execution.



### 01.02. Examples of exception

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



### 01.03. Handling an exception

-   Handling an exception is also known as catching an exception (when the code raises an exception, it must handle the exception immediately otherwise the application will terminates and quits).

-   Handling an exception means **putting the part of the code that might cause an error in a `try` block**, and handling the error when it occurs in an elegant way (as opposite to let your application simply terminates).

-   In Python, exceptions are handled using the **`try-except-else-finally`**.

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



#### 6) The `else` keyword

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



#### 7) The `finally` keyword

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



## 02. Files

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



### 02.01. File types

Python distinguishies between two types of files:

1.   Text files
2.   Binary files "non-text files"



#### 1) Text files

A text file is a file which stores sequences of characters using an encoding like utf-8, latin1 etc., whereas in the case of binary file data is stored in the same format as in computer memory.

**Examples of text files:**

-   Web standards: html, XML, CSS, JSON etc.
-   Source code: py, c, app, java etc.
-   Documents: txt, tex, RTF etc.
-   Tabular data: csv, tsv etc.
-   Conguration: ini, cfg, reg etc



#### 2) Binary files

On storage media both types of files (text files and binary files) are stored as a sequence of 0s and 1s.

The only difference is that when a text file is opened the data is decoded back using the same encoding scheme they were encoded in. However, in the case of binary files no such thing happens.

**Example of binary files:**

-   Document files: .pdf, .doc, .xls etc.
-   Image files: .png, .jpg, .gif, .bmp etc.
-   Video files: .mp4, .3gp, .mkv, .avi etc.
-   Audio files: .mp3, .wav, .mka, .aac etc.
-   Database files: .mdb, .accde, .frm, .sqlite etc.
-   Archive files: .zip, .rar, .iso, .7z etc.
-   Executable files: .exe, .dll, .class etc.



### 02.02. File attributes

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



### 02.03. `open()` method

-   The `open()` method creates a file object, which would be used to call other methods associated with it.

-   A file can be opened in different access modes: Read, Write and Append.

-   If not specified, the default access mode is read `r`.



### 02.04. File access modes

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



### 02.05. Accessing to files

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



### 02.06. Accessing to binary files

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



### 02.07. `close()` method

When a file is no longer needed, it is a good practice to close it.

When a file is closed, it can't be read or written.

Reason for closing files when they are not needed:

-   Changes to files in Python such as edits do not go into effect until after the le is closed.
-   Too many files open means more used RAM space causing a slow down of the system.
-   Operating systems have a limit on the number of files that can be opened simultaneously.