//Dakotah Sutton Rodriguez
//Experiment Average and Total Results

/*
Input: Name of the Experiment, How many Results, Result

Process: Total for results and average

Output:X Experiment Calculations:
		 Total Result
		 Average Result
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	// Declaration/Initalization

	string name;

	double num_results = 0,			// Number of results the user will enter
		results = 0,				// where each result is stored
		total = 0,				    // total of the results
		counter = 1;				// counter for loop control. 

	cout << "Please Enter the name of the name of the experiment ";
	getline(cin, name);
	cout << "\nHow many results would you like to enter? ";
	cin >> num_results;
	cout << setprecision(3) << fixed;
	while (counter <= num_results)
	{
		cout << "\nPlease enter a result \n";
		cin >> results;
		total = total + results;
		counter++;

	}
	if (num_results > 0)
	{
		cout << name << " Experiment Calculations: \n";
		cout << "\tThe total of the results is " << total;
		cout << "\n\t The Average of results is " << total / num_results;
	}
	else
	{
		cout << "Error, Please enter a number of results greater than 0";
	}
}
	
