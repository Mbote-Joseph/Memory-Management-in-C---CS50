#include <iostream>
using namespace std;

// Global constants from syllabus
const int ROWS = 3; // The number of rows in the array
const int COLS = 3; // The number of columns in the array
const int MIN = 1; // The value of the smallest number
const int MAX = 9; // The value of the largest number
const string programerName = "Programmer Name";

//Prototyping fucntios for later use
void fillArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

//Main function
int main(){
//Vaiable used for yes or no input
string yesOrNo;
//Whole main function will loop just in case user wants to check for another Lo Shu Magic Square
while (1){
//Variable used to stop loop
int stopProgram = 0;
// Define a Lo Shu Magic Square using 3 parallel arrays corresponding to each row of the grid
int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
//Calls the function fillArray to let user type in the numbers of the Lo Shu Magic Square
fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
//Calls the function showArray to print the users input in a 3 by 3 grid
showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
//Skips spaces
cout << endl;
cout << endl;
//Calls the function isMagicSquare to check if users input make a Lo Shu Magic Square
if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS) == 0){
//If this function returns false, it is not a magic square and will print this message
cout << "This is not a Lo Shu magic square";

}else{
//If function returns true, it is a magic square and will print this message out
cout << "This is a Lo Shu magic square";
}
//Ships lines
cout << endl;
cout << endl;
//Program will ask user if they would like to run program again
cout << "Do you want to try again? y or n: ";
cin >> yesOrNo;
//User must enter y or n, or program will ask again
while (yesOrNo != "y" && yesOrNo != "n"){

cout << "Please enter valid answer" << endl;
cout << "Do you want to try again? y or n: ";
cin >> yesOrNo;

}

//Program will reset of press enters y

if (yesOrNo == "y"){

cout << "Reseting program..." << endl << endl;
stopProgram = 1;

}

//Program will end if user enters n
if (yesOrNo == "n"){

//Set variable to 0 to stop program
stopProgram = 0;

}

//If statement will detect stopProgram is 0 and will break program

if (stopProgram == 0){
    break;
}

}

// Program final statement outputs
cout << "\nThank you for testing my program!!\nProgrammer: " << programerName << "\nComputer Science Project \nDue Date: 16/8/2020\n";

}

//Function 1
//This function will let user fill the arrays that make up the magic square
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
//Loop used to enter values for first array
for (int i = 0; i < size; i++){

cout << "Please enter number for row 0 and column " << i << ": ";

cin >> arrayRow1[i];

}

//Loop used to enter values for second array

for (int i = 0; i < size; i++)

{

cout << "Please enter number for row 1 and column " << i << ": ";

cin >> arrayRow2[i];

}

//Loop used to enter values for third array

for (int i = 0; i < size; i++)

{

cout << "Please enter number for row 2 and column " << i << ": ";

cin >> arrayRow3[i];

}

}

//Function 2

//This function will print the users input in a 3 by 3 grid

void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)

{

//Loop used to print first line of grid

for (int i = 0; i < size; i++)

{

cout << arrayRow1[i] << " ";

}

cout << endl;

//Loop used to print second line of grid

for (int i = 0; i < size; i++)

{

cout << arrayRow2[i] << " ";

}

cout << endl;

//Loop used to print third line of grid

for (int i = 0; i < size; i++){

cout << arrayRow3[i] << " ";

}

}

/*Function 3

This function will call 5 other functions to check if the users inputs make a magic square

If any the of functions return false, the isMagicSquare function will return false back to the main funcion

*/

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)

{

//This function checks if the numbers are between 1 - 9

if (checkRange(arrayRow1, arrayRow2, arrayRow3, COLS, MIN, MAX) != 1){

return 0;

}

//This functions checks if there are any repeat numbers

if (checkUnique(arrayRow1, arrayRow2, arrayRow3, size) != 1){

return 0;

}

//This function checks if the added values of each row equal to 15

if (checkRowSum(arrayRow1, arrayRow2, arrayRow3, size) != 1){

return 0;

}

//This function checks if the added values of each column equal to 15

if (checkColSum(arrayRow1, arrayRow2, arrayRow3, size) != 1){

return 0;

}

//This function checks if the added values of each diagonal line is equal to 15

if (checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size) != 1){

return 0;

}

//Returns true if all other functions return true

return 1;

}

//Function 4

//This function finds if user inputs are within the range of magic square (1 - 9)

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max){

//This loop checks if each number is within 1 - 9

for (int i = 0; i < size; i++){

//If number is not within 1- 9, function will return false back to isMagicSquare

if ((arrayRow1[i] <= min - 1 || arrayRow1[i] >= max + 1) || (arrayRow2[i] <= min - 1 || arrayRow2[i] >= max + 1) || (arrayRow3[i] <= min - 1 || arrayRow3[i] >= max + 1)){

return 0;

}

//If all are within range, returns true to isMagicSquare

else

{//Returns true of all arrays equal 15
return 1;


return 1;

}

}

}

//Function 5

//This function checks if all numbers are unique

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)

{

//Local variables for function

int tempArray[9]{ 0,0,0,0,0,0,0,0,0 }; //Had to initialized variable or ran into error

int howManyInArray = 9;

int tempHolder;

//Combines all three arrays into one

for (int i = 0; i < size; i++)

{

tempArray[i] = arrayRow1[i];

}

for (int i = 0; i < size; i++){

tempArray[i + 3] = arrayRow2[i];

}

for (int i = 0; i < size; i++){

tempArray[i + 6] = arrayRow3[i];

}

//Sorts combined array from highest to lowest

while (1){

int leaveWhileLoop = 0;

for (int i = 0; i < howManyInArray; i++){

if (tempArray[i] < tempArray[i + 1]){

tempHolder = tempArray[i + 1];
tempArray[i + 1] = tempArray[i];
tempArray[i] = tempHolder;
leaveWhileLoop = 1;

}

}

//If there is no more to sort, program will leave while loop

if (leaveWhileLoop == 0)

{

break;

}

}

//Loop will look for matching pair

for (int i = 0; i < howManyInArray; i++)

{

//If matching pair is found, returns false back to isMagicSquare

if (tempArray[i] == tempArray[i + 1]){

return 0;

}

}

//If no pairs are found, returns true to isMagicSquare

return 1;

}

//Function 6

//This function checks if each row is equal to 15
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)

{

//Local variables to hold temporary values

int tempAddedArray1 = 0;

int tempAddedArray2 = 0;

int tempAddedArray3 = 0;

//Loop will add all values of each row and store in temparry

for (int i = 0; i < size; i++){

tempAddedArray1 += arrayRow1[i];
tempAddedArray2 += arrayRow2[i];
tempAddedArray3 += arrayRow3[i];

}

//Simple comparison operators checking to see if all arrays = 15

if (tempAddedArray1 == tempAddedArray2 && tempAddedArray2 == tempAddedArray3 && tempAddedArray1 == tempAddedArray3){

    //Returns true of all arrays equal 15
    return 1;

}

//Otherwise returns false if not equal to 15
return 0;

}

//Function 7

//This function checks of each column is equal to 15
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){

    //Local variable to hold added column values
    int tempAddedArray;

    //Loop used to add all values of a colum
    for (int i = 0; i < size; i++){

    //Resets variable back to 0
    tempAddedArray = 0;

    //Adds all values of a column
    tempAddedArray = arrayRow1[i] + arrayRow2[i] + arrayRow3[i];

    //If a colum does not equal 15, function will return false
    if (tempAddedArray != 15){

        return 0;

    }
    }

    //Otherwise function will return true
    return 1;

}

//Function 8

//This function checks if the diagonal line values equal 15

bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){

    //Holds the values of added arrays
    int tempHolder = 0;

    //Add all the diagonal lines going from top left to bottom right of the array
    tempHolder = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];

    //If the added values does not equal 15, function will return false
    if (tempHolder != 15){

        return 0;

    }

    //Resets tempHolder back to 0
    tempHolder = 0;

    //Adds the diagonals lines going from top right to bottom left of the array
    tempHolder = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];

    //If the added value does not equal 15, function will return false

    if (tempHolder != 15){

        return 0;

    }
    //Function will return true if both diagonal lines equal 15
    return 1;

}