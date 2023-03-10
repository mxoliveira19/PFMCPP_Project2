#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
int          // integer
float        // Floating Point
double       // Double Floating Point
bool         // Boolean
char         // Character
wchar_t      // Wide Character 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int cash = 0;
    int level = 0;
    int point = 0;

    float limit = 0.0f;
    float height = 0.0f;
    float width = 0.0f;

    double volume = 0.0;
    double density = 0.0;
    double pression = 0.0;

    bool running = false;
    bool good = false;
    bool captain = false;

    char note = '-';
    char room = '-';
    char side = '-';
    
    ignoreUnused(number, cash, level, point, limit, height, width, volume, density, pression, running, good, captain, note, room, side); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 
/*
 1)
 */
double calculateTime(double initialTime = 0.0, double finalTime = 0.0) 
{
    ignoreUnused(initialTime, finalTime);
    return {};
}
/*
 2)
 */
bool moveBallOnDisplay(bool clicked, int timesOnStage = 0) 
{
    ignoreUnused(clicked, timesOnStage);
    return {};
}
/*
 3)
 */
double calculateCircleArea(double diameter, int centerX = 0, int centerY = 0) 
{
    ignoreUnused(diameter, centerX, centerY);
    return {};
}
/*
 4)
 */
bool printImage(char option, int width = 5) 
{
    ignoreUnused(option, width);
    return {};
}
/*
 5)
 */
char getClassRoomStudent(int numberID, int year = 2020) 
{
    ignoreUnused(numberID, year);
    return {};
}
/*
 6)
 */
bool changeStarColor(int numberID, int temperature = 1000) 
{
    ignoreUnused(numberID, temperature);
    return {};
}
/*
 7)
 */
bool shutdownSystem(bool bottonClicked, int waitTime = 10) 
{
    ignoreUnused(bottonClicked, waitTime);
    return {};
}
/*
 8)
 */
float changeToCostumer(double received, double total = 0) 
{
    ignoreUnused(received, total);
    return {};
}
/*
 9)
 */
double getCurrentPlaceObject(double coordenateX = 0, double coordenateY = 0) 
{
    ignoreUnused(coordenateX, coordenateY);
    return {};
}
/*
 10)
 */
int getAgeStudent(int yearBorn, int currentYear = 2020) 
{
    ignoreUnused(yearBorn, currentYear);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto timeCalculated = calculateTime(2.356, 4.367);    
    //2)
    auto ballMove = moveBallOnDisplay(true, 12);    
    //3)
    auto areaCircle = calculateCircleArea(0.76, 12, 1004);    
    //4)
    auto printNow = printImage('a', 22);    
    //5)
    auto studentRoom = getClassRoomStudent(12922);    
    //6)
    auto starColor = changeStarColor(176, 22);    
    //7)
    auto onOff = shutdownSystem(false, 0);    
    //8)
    auto getChange = changeToCostumer(12.00, 11.32);    
    //9)
    auto placeNow = getCurrentPlaceObject(0.34, 8.32);    
    //10)
    auto studentAge = getAgeStudent(2002, 2020);    
    
    ignoreUnused(carRented, timeCalculated, ballMove, areaCircle, printNow, studentRoom, starColor, onOff, getChange, placeNow, studentAge);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
