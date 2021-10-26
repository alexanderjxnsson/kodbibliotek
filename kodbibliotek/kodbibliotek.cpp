#include <iostream>
#include <stdlib.h>
using namespace std;
//  Short commands(windows/visual studio community):
/*
    Indentation: Mark several lines and TAB to move to right, SHIFT+TAB to move to left.
    Comment multiple lines. Mark, CTRL+K then CTRL+C.
*/
int numberGenerator(int a)
{
    int random;
    srand(rand() ^ time(NULL));
    return random = rand() % (10 - 1 + 1);
    //Random number between 1 and 10.
}
void oneDArray()
{
    printf("One dimensional array\n");
    int array1D[5]{ 1, 2, 3, 4, 5 };
    for (size_t i = 0; i < 5; i++)
    {
        printf("Index[%d] Value: %lu\t", i, array1D[i]);
    }
    printf("\n");
}
void twoDArray()
{
    printf("\nTwo dimensional array\n");
    int array2D[2][5] = {
        {1, 2, 3, 4, 5},  //Row 0
        {6, 7, 8, 9, 10}    //Row 1
    };
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("Index[%d][%d] Value: %lu\n", i, j, array2D[i][j]);
        }
    }
}
void threeDArray() {
    printf("\nThree dimensional array\n");
    int array3D[3][3][3] =
    {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},                 //Row 0
        {{10, 11, 12}, { 13, 14, 15 }, { 16, 17, 18}},     //Row 1
        {{19, 20, 21}, { 22, 23, 24 }, { 25, 26, 28}}     //Row 2
    };
    //Nested for loop
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t x = 0; x < 3; x++)
        {
            for (size_t y = 0; y < 3; y++)
            {
                printf("Index[%d][%d][%d]: Value: %lu\n", i, x, y, array3D[i][x][y]);
            }
        }
    }
}
string NumToText(int num) {
    string NumToText[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    cout << NumToText[num] << endl;
    return NumToText[num];
}

int main() {
    /* 
    * NUMBER GENERATOR
    */
    int randomNum = 0;
    randomNum = numberGenerator(randomNum);
    cout << "This is the random number: " << randomNum << endl;
    /*
    * 1D array
    */
    oneDArray();
    /*
    * 2D array
    */
    twoDArray();
    /*
    * 3D array
    */
    threeDArray();
    /*
    * Number to text
    */
    cout << "Enter number between 0-9\n";
    int num;
    cin >> num;
    NumToText(num);
}
