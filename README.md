The STL forward_list is a container that supports fast insertion and removal of elements from anywhere in the container. This would be beneficial because it consumes one less pointer for every node. This is more efficient than a standard list container. 

There are several functions that pertain to the STL forward_list. I have included many of them in the program. 

Examples:

assign() - This is the function to use in order to assign variables to a list that you have declared.
push_front() - This function will add the desired element to the front of the list you assigned it to.
pop_front() - This function will remove the first variable from the declared list.
clear() - This function will clear elements from a list.
reverse() - This function will reverse the order of numbers in the list.
swap() - This function lets you swap one list with another list.
sort() - This function will sort numbers in a list from smallest to largest number.
unique() - This funtion will remove multiple of the same number in a list.
empty() - This funciton checks the list to see if it is empty or not.

In the following program on line 56 the unique function is commented out in order to show the sort() function. If the unique function is not commented it will remove the multiple numbers in list five.

In order to out put the list, you have to use a for loop that assigns a list to a variable. In the program you would write this as for (int& a : firstList). This will assign the first list to the variable a. Then you can could output the first list using cout << a << endl;. 

The STL forward_list can be used for chaining in hashing or adjacency list representation of graph.

List of common functions:
https://en.cppreference.com/w/cpp/container/forward_list
Exmples of where this can be used:
https://www.thecrazyprogrammer.com/2017/08/stl-forward-list.html
