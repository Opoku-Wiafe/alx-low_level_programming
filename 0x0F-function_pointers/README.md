
			Function Pointers

A function pointer is a variable that stores the address of a function that can later be called through that function pointer¹. Function pointers are used to pass functions as arguments to other functions¹. They can also be used to implement callbacks¹. 

Here's an example of how to declare a function pointer that takes no parameters and returns an int:
```c
int (*f)(void);
```
Here's an example of how to call a function pointed by f:
```c
(*f)();
```
```c
f();
```
You can learn more about function pointers in C from [GeeksforGeeks](https://www.geeksforgeeks.org/function-pointer-in-c/) and [Stack Overflow](https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work).

Source: Conversation with Bing, 4/21/2023(1) Function Pointer in C - GeeksforGeeks. https://www.geeksforgeeks.org/function-pointer-in-c/ Accessed 4/21/2023.
(2) How do function pointers in C work? - Stack Overflow. https://stackoverflow.com/questions/840501
