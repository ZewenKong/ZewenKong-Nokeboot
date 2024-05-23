# Lecture 7

## 01. Object-Oriented Programming

### 01.01. Evolution of programming languages

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



## 02. Object-oriented programming paradigm

Object-oriented programming (OOP) is a programming paradigm that uses "objects" – data structures encapsulating data fields and procedures together with their interactions – to design applications and computer programs.

Invented with the creation of the **Simula language**, then object-oriented programming is integrated into C language, and the resulting language was called C++.

Furthermore, a simple version of C++ was developed, which called JAVA. And many modern programming languages now support OOP including python.

Python object-oriented programming (discussing OOP, for better program design and better modularisation), the concept of OOP in Python focuses on creating reusable code.



## 03. Class

Example to explain Class:

-   A class is to an Object what a blueprint is to (a house)
-   A class establishes the characteristics and the behaviors of the object
-   Classes are the plan; objects are the embodiment of that plan
-   Many houses can be built from the same blueprint.

```python
# Example of a simple class

class House:
    pass # an empty block
```

When first add a class, might not be ready to add its entire contents. In Python we use the `pass` keyword (a statement) to indicate that nothing happens.



## 04. Object

h1 is an instance of class (House) <===> h1 is an object of type (House)

```python
# Creating an instance of a class (an object)

h1 = House()
```

An object has two characteristics:

-   Attributes (variables)
-   Behaviour (methods)



## 05. Methods

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

### 05.01. The `self` parameter

The `self` parameter is a reference to the current instance of the class.

It is named self by convention, technically, you can it whatever you like, but it has to be the first parameter of any function in the class. It is important to note that if you replace **self** with another word, it will decrease the readability of your code.



### 05.02. The `__init__` method

-   There are many method names which have special significance in Python classes.
-   The `__init__` method is an example, the `__init__` method is run as soon as an object of a class is instantiated 实例化  (i.e. created).

-   The method is useful to do any initialisation (i.e. passing initial values to your object) you want to do with your object. Notice the **double underscores** both at the beginning and at the end of the name.

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



### 05.03. Class and object variables

-   **Class variables** are shared - they can be accessed by all instances of that class.

-   Class Variables - A class variable is a variable that is declared inside of **class**, but outside of any instance method or `__init__()` method.

-   There is only one copy of the class variable and when any one object makes a change to a class variable, that change will be seen by all the other instances.



**Object variables** are owned by each individual **object/instance** of the class.

-   Instance variables are owned by instances of the class.
-   This means that for each object or instance of a class, the instance variables are different.
-   Unlike class variables, instance variables are defined within methods.



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



### 05.04. Class and object methods

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



### 05.05. Access control to class variables and methods

Technically, Python doesn't enforce access control. It does it by convention only.

**Public**: Meaning the class variable and methods can be accessed from any other class. 

`_` single underscore (don't expose).

`__ `double underscore (hide) to define private members.

All class variables and methods are public by default in Python.



### 05.06.  Private variables and methods

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



### 05.07. Static method

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



## 06. Summary of methods

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

Generally use **static** methods to create utility functions.



## 07. Inheritance

**Inheritance** (fundamental object-oriented technique), used to organise and create reusable classes.

Inheritance allows a software developer to derive a new class from an existing one.

The **existing class** is called the **parent class**, or superclass.

The **derived class** is called the **child class** or subclass.

That is, the child class inherits the methods and data defined for the parent class To tailor a derived class, can add new variables or methods, or can modify the inherited ones.

### 07.01. Inheritance in action

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



### 07.02. Type of inheritance

**Simple inheritance**

Class A <== Class B

**Multilevel inheritance**

Class A <== Class B <== Class C

**Multiple inheritance**

Class A <== Class C / Class B <== Classs C



## 08. Method overriding

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



## 09. Module

A module is a file consisting of Python code (.py file).

A module file groups related functionality you want to include in your application.

