#include <iostream>
#include <string>
using namespace std;
const int ROWS = 13;
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main(void) {
    while (true) {
        cout << displaySeatColumn;
        cout << "Enter a seat or Q to quit: ";
        string input;
        cin >> input;
        if (input == "Q" || input == "q") {
            break;
        }
    }

}

int findRowIndex(int thisRow) { return 1; }

int findSeatIndex(char thisSeat) { return 1; }

void displaySeatColumn(char seats[][ROWS], int column)
{
    for (int row = 1; row <= 12; row++) {
        cout << "D ";

        if (row == 12) {
            for (row <= 24; row++;) {
                cout << "C ";
            }
            if (row == 24) {
                for (row <= 37; row++;) {
                    cout << "B ";
                    if (row == 37) {
                        for (row <= 49; row++;) {
                            cout << "A ";
                        }
                    }
                }
            }
        }
    }
}