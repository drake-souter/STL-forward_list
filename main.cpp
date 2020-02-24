#include <iostream>
//You have to include the forward_list package
#include <forward_list>

using namespace std;

int main()
{
	//This statement initializes the forward list. 
	//This statement can be used to make as many forward lists as needed. 
	//Change "firstList" to whatever you want to call it.
	forward_list<int> firstList;
	forward_list<int> secondList;
	forward_list<int> thirdList;
	forward_list<int> fourthList;
	forward_list<int> fifthList;

	//The assign() statement that assigns numbers to the list.
	//Using assign({}) you can add any number to the graph seperated by a comma
	firstList.assign({0, 25, 50, 75, 100});
	//If you use assign(x, y) followed by a 2 numbers, it will output y, x number of times.
	secondList.assign(7, 14);
	thirdList.assign({1, 2, 3, 4, 5});
	fourthList.assign({10, 20, 30, 40, 50});
	fifthList.assign({1, 2, 3, 4, 2, 2, 1, 3, 6, 5});

	//Using push_front() will add an element to the front of the list.
	//This specific situation will add 10 to the beginning of the first list.
	firstList.push_front(10);

	//Using pop_front() will remove an element from the front of the list.
	//This situation removed the first number in the third list.
	thirdList.pop_front();

	//Using clear() will clear the elements from the list. 
	//In this situation, it will clear numbers 10-50 in the fourth list.
	fourthList.clear();

	//Using the reverse() function, you can reverse the list you assign.
	//In this situation, it will reverse the third forward list. 
	//It will only display numbers 2-5 because the pop_front function
	//was run early which removed the first number in the list. If the  
	//pop_front() function was run after the reverse function, it would 
	//remove the number 5 from the forward list.
	thirdList.reverse();

	//Using the swap() function, you can swap 2 forward lists.
	//Is this situation the second and third list swap with
	//each other.
	secondList.swap(thirdList);

	//Using the sort() function will sort the list from smallest to largest number.
	fifthList.sort();

	//Using the unique() function will remove multiple of the same number in a list.
	//fifthList.unique();

	//The is the statement that assigns a variable to the forward_list.
	//A for loop is required in order to get the list to be displayed.
	//The variables need to be replaced as well as the name of the forward_list.
	cout << "This is the first forward list: ";
	for (int& a : firstList)
		cout << a << " ";
	//The endl function needs to be out of the for loop in order to move the next line properly
	cout << endl;
	cout << "This is the second forward list: ";
	for (int& b : secondList)
		cout << b << " ";
	cout << endl;
	cout << "This is the third forward list: ";
	for (int& c : thirdList)
		cout << c << " ";
	cout << endl;
	cout << "This is the fourth forward list: ";
	for (int& d : fourthList)
		cout << d << " ";
	cout << endl;
	cout << "This is the fifth forward list: ";
	for (int& e : fifthList)
		cout << e << " ";
	cout << endl;

	//This statement is checking to see if the fourth forward list is empty or not.
	//Then it will output what ever it determines. This is done by using the fucntion
	//empty(). 
	fourthList.empty() ? cout << "The fourth list is empty" << endl:
						 cout << "The fourth list is not empty" << endl;

	return 0;
}