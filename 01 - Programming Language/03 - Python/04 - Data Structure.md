# Lecture 4

## 01. Data structures

Data structures, are particular ways of storing data to make some operation easier or more efficient (tuned for certain tasks). And data structures are suited to solving certain problems, and they are often associated with algorithms.



Python built-in data structures:

- Lists
- Tuples
- Sets
- Dictionaries



Roughly two categories of data structures:

- **Built-in data structures**, data structures that are so common as to be provided by default by the programmig language, e.g. lists, tuples, etc.
- **User-defined data structures**, classes in object oriented programming that are designed for a particular task.



## 02. List

A **list** is an ordered sequence of items, it is defined using square brackets `[ ]`, the empty list is created using an empty pair of square brackets (list may contain items of different types).

**Lists are mutable 可变的** (mutable means that the content can be changed).

```python
my_list = [1, 2, 3]
my_list[0] = 125
print(my_list)  # [125, 2, 3]
```



### 02.01. Accessing an element of a list by index

- It is possible to access any element of a list by index
- Index in Python starts from 0
- Only integers are used for indexing
- The index of a list ranges from 0 to N-1 where N is the number of elements int he list. For example, a list containing 3 elements will have an index from 0 to 2
- Trying to access an element other that this will raise an IndexError

```python
simpleList = [3, 'ok', 10.5, 'python', True]
print(simpleList[4])
```



### 02.02. Nested lists

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



### 02.03. Negative indexing

It is possible to use negative indexing with lists. The index of -1 refers to the last item, -2 to the second last item and so on.

```python
myList =['w', 'o', 'r', 'l', 'd']
print(myList[-1])  # d
print(myList[-2])  # l
```



### 02.04. Iterating over 遍历 the elements of a list

Can iterate through the elements of a list with a **for** loop.

```python
chemicalList = ['Oxygen', 'Carbon', 'Potassium', 'Zinc', 'Barium']
for i in chemicalList:
    print(i)
```



### 02.05. List methods

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



### 02.06. Numeric lists methods

```python
nbList = [234, 55, 67, 7890, 10]
print(min(nbList))
print(max(nbList))
print(sum(nbList))
```

[Ohter lists methods of Python](https://docs.python.org/3/tutorial/datastructures.html?highlight=list) 



### 02.07. Note on List methods

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



### 02.08. List comprehensions 理解

List comprehensions provide a concise 简洁的 way to create lists. Common applications are to make new lists where each element is the result of some operations applied to each member of another sequence, or to create a subsequence of those elements that satisfy a certain condition.



**Syntax of list comprehensions:**

- [expression for item in iterable if condition == True]

- The return value is a new list, leaving the old list unchanged

- The condition is optional

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



## 03. Tuples

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



### 03.01. Empty and single value tuples

```python
# Empty tuple
tup1 = ()
# Tuple for a single value
tup2 = (11,)
print(type(tup2))
```



### 03.02. Tuple packing and unpacking

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



### 03.03. Reasons for using tuples

A tuple, as a separate type, an immutable list gives you a data structure with some integrity, some permanent-ness of its content (cannot accidentally change one).



### 03.04. Lists and tuples

All methods that works with a list works with a tuple except methods that modify the tuple (since tuples are immutable). Thus indexing, len, print, all work as expected. However, none of the mutable methods work: append, extend, del of an element but itʼs possible to delete a whole tuple.



## 04. Sets

-   A set is an unordered collection with no duplicate elements.

-   Sets are written with curly brackets `{ }`.

-   Sets can include elements of different datatypes.

-   Basic uses include membership testing and eliminating duplicate entries.

-   Set objects also support mathematical operations on sets such as union, intersection, difference, etc.



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



## 05. Dictionary

-   A dictionary as an unordered set of `key: value` pairs, with the requirement that the keys are unique (within one dictionary).

-   ==Dictionaries are written with curly braces== `{ }`.

-   Placing a comma-separated 逗号分隔 list of `key:value` pairs within the braces adds initial `key:value` pairs to the dictionary; this is also the way dictionaries are written on output.

-   The main operations on a dictionary are storing a value with some key and extracting the value given the key (字典的主要操作是用某个键存储一个值，并在给定键的情况下提取值).

-   And it is also possible to **delete** a `key:value` pair with `del`.

-   If you store using a key that is already in use, the old value associated with that key is forgotten (如果您使用已在使用的密钥进行存储，则与该密钥关联的旧值将被遗忘)

-   It is an error to extract a value using a non-existent key (使用不存在的键提取值是错误的).

-   The values of a dictionary can be of any type, but the keys must be of an immutable data type such as strings, numbers, or tuples (字典的值可以是任何类型，但键必须是不可变的数据类型，例如字符串、数字或元组).

-   The `dict()` function can also be used to create dictionaries.



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



## 06. Summary

Mutable and immutable data types and datastructures in Python

**Immutable Datatypes**: 1) Number, 2) Strings, 3) Tuples

**Mutable Datatypes**: 1) Lists, 2) Dictionary, 3) Sets

