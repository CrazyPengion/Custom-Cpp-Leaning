/*
TASK: 5 number sorter

EXAMPLE INPUT:
{
Enter Number 1: 13 
Enter Number 2: -3
Enter Number 3: 67.7
Enter Number 4: 19232
Enter Number 5: -14342

-14342 ; -3 ; 13 ; 67.7 ; 19232
}

I have no learned loops as of making this, once I have I'll 
be able to make a sorter with a dynamic amount of numbers.

UPDATE:
I have learned lists, as it seems to be unreasonably hard without.
I did however not learn loops, as I just wanted to make a side project
as a break from learning new stuff and as a challange.
*/

#include <iostream>
#include <string>
#include <list>

double getNumber(std::string_view);
std::list<double> sort(double, double, double, double, double);
void print(std::list<double>);

int main()
{
	double number1{ getNumber("1") };
	double number2{ getNumber("2") };
	double number3{ getNumber("3") };
	double number4{ getNumber("4") };
	double number5{ getNumber("5") };

	std::list<double> sortedList{};
	sortedList = sort(number1, number2, number3, number4, number5);

	print(sortedList);

	// wait for user input before closing
	std::string holdWindow{};
	std::cout << "\n\nPress any key (and then enter) to exit...\n";
	std::cin >> holdWindow;
	return(0);
}

double getNumber(std::string_view number)
{
	double userInput{};
	std::cout << "Enter Number " << number << ": ";
	std::cin >> userInput;
	return userInput;
}

std::list<double> sort(double x1, double x2, double x3, double x4, double x5)
{
	int posx1{ 0 };
	int posx2{ 0 };
	int posx3{ 0 };
	int posx4{ 0 };
	int posx5{ 0 };

	// finding the correct place for x1
	if (x1 > x2) { ++posx1; }
	if (x1 > x3) { ++posx1; }
	if (x1 > x4) { ++posx1; }
	if (x1 > x5) { ++posx1; }

	// finding the correct place for x2
	if (x2 > x1) { ++posx2; }
	if (x2 > x3) { ++posx2; }
	if (x2 > x4) { ++posx2; }
	if (x2 > x5) { ++posx2; }

	// finding the correct place for x3
	if (x3 > x2) { ++posx3; }
	if (x3 > x1) { ++posx3; }
	if (x3 > x4) { ++posx3; }
	if (x3 > x5) { ++posx3; }

	// finding the correct place for x4
	if (x4 > x2) { ++posx4; }
	if (x4 > x3) { ++posx4; }
	if (x4 > x1) { ++posx4; }
	if (x4 > x5) { ++posx4; }

	// finding the correct place for x5
	if (x5 > x2) { ++posx5; }
	if (x5 > x3) { ++posx5; }
	if (x5 > x4) { ++posx5; }
	if (x5 > x1) { ++posx5; }

	//now you have the position of each number (0 - smallest number ; 4 - largest number)

	// create a list with the positions of x1-5
	std::list<int> unsortedList{ posx1 ,posx2 ,posx3 ,posx4 ,posx5 };

	// use the indexes 0-4 from the first list to create the sorted list
	int posToValue{};
	int currentPos{};
	std::list<double> sortedList{};
	std::list<int> tempList{};

	tempList = unsortedList; // create copy of list that saves positions
	posToValue = tempList.front(); 
	// find posx with 0
	if (posToValue != 0) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 0) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 0) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 0) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	// put the value of posx into sortedList
	if (currentPos == 0) { sortedList.push_back(x1); }
	if (currentPos == 1) { sortedList.push_back(x2); }
	if (currentPos == 2) { sortedList.push_back(x3); }
	if (currentPos == 3) { sortedList.push_back(x4); }
	if (currentPos == 4) { sortedList.push_back(x5); }

	tempList = unsortedList; // reset variables
	posToValue = tempList.front();
	currentPos = 0;
	// find posx with 0
	if (posToValue != 1) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 1) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 1) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 1) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	// put the value of posx into sortedList
	if (currentPos == 0) { sortedList.push_back(x1); }
	if (currentPos == 1) { sortedList.push_back(x2); }
	if (currentPos == 2) { sortedList.push_back(x3); }
	if (currentPos == 3) { sortedList.push_back(x4); }
	if (currentPos == 4) { sortedList.push_back(x5); }

	tempList = unsortedList; // reset variables
	posToValue = tempList.front();
	currentPos = 0;
	// find posx with 0
	if (posToValue != 2) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 2) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 2) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 2) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	// put the value of posx into sortedList
	if (currentPos == 0) { sortedList.push_back(x1); }
	if (currentPos == 1) { sortedList.push_back(x2); }
	if (currentPos == 2) { sortedList.push_back(x3); }
	if (currentPos == 3) { sortedList.push_back(x4); }
	if (currentPos == 4) { sortedList.push_back(x5); }

	tempList = unsortedList; // reset variables
	posToValue = tempList.front();
	currentPos = 0;
	// find posx with 0
	if (posToValue != 3) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 3) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 3) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 3) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	// put the value of posx into sortedList
	if (currentPos == 0) { sortedList.push_back(x1); }
	if (currentPos == 1) { sortedList.push_back(x2); }
	if (currentPos == 2) { sortedList.push_back(x3); }
	if (currentPos == 3) { sortedList.push_back(x4); }
	if (currentPos == 4) { sortedList.push_back(x5); }

	tempList = unsortedList; // reset variables
	posToValue = tempList.front();
	currentPos = 0;
	// find posx with 0
	if (posToValue != 4) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 4) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 4) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	if (posToValue != 4) { tempList.pop_front(); ++currentPos; posToValue = tempList.front(); }
	// put the value of posx into sortedList
	if (currentPos == 0) { sortedList.push_back(x1); }
	if (currentPos == 1) { sortedList.push_back(x2); }
	if (currentPos == 2) { sortedList.push_back(x3); }
	if (currentPos == 3) { sortedList.push_back(x4); }
	if (currentPos == 4) { sortedList.push_back(x5); }

	return(sortedList);
}

void print(std::list<double> sortedList)
{
	double value1{ sortedList.front() };
	sortedList.pop_front();
	double value2{ sortedList.front() };
	sortedList.pop_front();
	double value3{ sortedList.front() };
	sortedList.pop_front();
	double value4{ sortedList.front() };
	sortedList.pop_front();
	double value5{ sortedList.front() };
	sortedList.pop_front();

	std::cout << value1 << " ; " << value2 << " ; " << value3 << " ; " << value4 << " ; " << value5;
}