//Student Name: Brett Boggs

//Teacher: Dr. Tyson McMillan

//Date: 11/8/2021

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <vector>
#include <string>
using namespace std;



// Research Input data: go to http://www.weather.com (Links to an external site.)

// Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

// Dallas = 1, Denver = 2;  // Replace Dallas and Denver with the names of your cities

//Data Table

//City X, Day X: Temp
/*
City 1, Day 1: 76

City 1, Day 2: 72

City 1, Day 3: 68

City 1, Day 4: 66

City 1, Day 5: 64

City 1, Day 6: 73

City 1, Day 7: 65

City 2, Day 1: 64

City 2, Day 2: 57

City 2, Day 3: 59

City 2, Day 4: 60

City 2, Day 5: 67

City 2, Day 6: 57

City 2, Day 7: 65
*/


 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

    
   //For up to 5 Points Extra Credit





    //   1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
    int cityOne[7] = {76, 72, 68, 66, 64, 73, 65};
    //   2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
    int cityTwo[7] = {64, 57, 59, 60, 67, 57, 65};
    //   3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.   
    for (int i  =0; i < WEEK; i++){
          temperature[0][i] = cityOne[i];
        }
        
    for (int i = 0; i < WEEK; i++){
          temperature[1][i] = cityTwo[i];
        }
    //   4. print the results of temperature[i][j]; to the screen.
    std::vector<std::string> cityName = {"Dallas", "Denver"};
    cout<<"Dallas & Denver Week Temps\n";
        
    for (int i = 0; i < CITY; i++){
        for(int j = 0; j < WEEK; j++){   
            cout << cityName[i] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
       }
    }
  return 0;
 }

