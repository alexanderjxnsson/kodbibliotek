#include <iostream>
using namespace std;
int numberGenerator(int a) {
    int random;
    srand(rand() ^ time(NULL));
    return random = rand() % (10 - 1 + 1);
    //Random number between 1 and 10.
}

int main() {
        //numberGenerator
        int randomNum = 0;
        randomNum = numberGenerator(randomNum);
        cout << randomNum << endl;
        //3D matrix
        int arrayTest[3][3][3] = { {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},                 //Row 0
                                {{10, 11, 12}, { 13, 14, 15 }, { 16, 17, 18}},     //Row 1
                                {{19, 20, 21}, { 22, 23, 24 }, { 25, 26, 28}}     //Row 2
        };
        //Nested for loop
        for (size_t i = 0; i < 3; i++) {
            for (size_t x = 0; x < 3; x++) {
                for (size_t y = 0; y < 3; y++) {
                    printf("Arr[%d][%d][%d]: %lu\n", i, x, y, arrayTest[i][x][y]);
                }
            }
        }
}
