#include <iostream>
#include <string>

using namespace std;

const int ROWS = 13;
int findRowIndex(int thisRow);
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][ROWS], int column);

int main(void) {
    char seats[4][ROWS] = { {'D','D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D'}, {'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C' ,'C'},{'B','B','B','B','B','B','B','B','B','B','B','B'},{'A','A','A','A','A','A','A','A','A','A','A','A'} };
    
    while (true) {
        int i = 0;
        int j = 0;

        for (i = 0; i < 12; i++) {
            cout << seats[-1][ROWS]<< ' ';
        }
        cout << endl;
        if (i == 12) {
            for (i = 12;  i < 24; i++) {
                cout << seats[0][ROWS] << ' ';
            }
        }
        cout << endl;
      
        cout << endl<< "                  1 1 1 1"<<endl<<"1 2 3 4 5 6 7 8 9 0 1 2 3"<<endl;

        cout << endl;
        if (i == 24) {
            for (i = 24;  i < 37; i++) {
                cout << seats[1][ROWS] << ' ';
            }
        }
        cout << endl;
        if (i == 37) {
            for (i = 37; i <= 49; i++) {
                cout << seats[2][ROWS] << ' ';
            }
        }
        cout << endl;
                {

                    cout <<endl<< "Enter a seat or Q to quit: ";
                    string input;
                    cin >> input;
                    if (input == "Q" || input == "q") {
                        break;
                    }
                }

            }
    }
