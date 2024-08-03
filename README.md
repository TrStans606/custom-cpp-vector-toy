# custom-cpp-vector-toy
A basic, custom implementation of the std vector class in c++ using dynamic arrays 

The basic format for the contructor is C_vector vec(T* arr,int size). Where arr is a dnyamic array and size is the size of the array before pass through.

This class supports all data types the std::vector class can and has some basic functions like:
- add(T): can add infinite items of the arrays data type to the vector class.
- length(): gives the size of the custom vec.
- pop(): removes the last element of the vector.
- erase(int): removes the element at the given posistion shifting every other element leftward.
- get_item(int): returns whatevery value is contained at the given posistion. 
