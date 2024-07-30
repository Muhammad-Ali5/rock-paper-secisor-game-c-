Rock, Paper, Scissors Game
Overview
This is a simple console-based Rock, Paper, Scissors game implemented in C++. The game allows the user to play against the computer. The rules are as follows:

Rock crushes Scissors.
Scissors cut Paper.
Paper covers Rock.
The game continues until the user decides to exit.

Features
User can select Rock, Paper, or Scissors.
Computer randomly selects Rock, Paper, or Scissors.
The game displays the result of each round.
The game can be exited by selecting the appropriate option.
How to Run
Clone the repository or copy the source code to your local machine.
Compile the code using a C++ compiler. For example, using g++:

g++ -o rps_game rps_game.cpp
Run the executable:

./rps_game
Game Instructions
Start the game:
Run the compiled executable file.
You will see a welcome message and instructions on the screen.
Select an option:
Press 1 to select Rock.
Press 2 to select Paper.
Press 3 to select Scissors.
Press 4 to exit the game.
View the result:
The game will display the result of your choice versus the computer's random choice.
You will see if you win, lose, or draw the round.
Continue or Exit:
You can continue to play by selecting another option.
To exit, press 4.
Code Explanation
The game is implemented in a C++ class called RockPaperScissors. Below are the key components of the code:

Class: RockPaperScissors
Private Members:
int yr_guess, comp_guess, choice: Variables to store user choice, computer choice, and user menu selection.
Public Methods:
void setData(): The main method that runs the game loop, handles user input, computer's random choice, and determines the game result.
Main Function
Creates an instance of RockPaperScissors.
Calls the setData() method to start the game.
Example Code

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class RockPaperScissors {
    private:
        int yr_guess, comp_guess, choice;
    public:
        void setData() {
            cout << "\tRock crushes Scissors...\n\tScissors cut Paper...\n\tPaper covers Rock..." << endl;
            cout << "\t==========================================" << endl;
            printf("\t---Welcome to Rock, Paper, and Scissor Game:)---\n");
            cout << "\t==========================================" << endl;
            srand(time(0));
            while (true) {
                comp_guess = rand() % 3 + 1;
                cout << "\tPress 1. Select Rock " << endl;
                cout << "\tPress 2. Select Paper " << endl;
                cout << "\tPress 3. Select Scissor " << endl;
                cout << "\tPress 4. Exit Game " << endl;
                cout << "\t==========================================" << endl;
                cout << "Enter Your choice :)" << endl;
                cin >> choice;
                switch (choice) {
                    case 1:
                        if (comp_guess == 1) {
                            cout << "Game Draw :)" << endl;
                            cout << "You = Rock & Computer = Rock " << endl;
                        } else if (comp_guess == 2) {
                            cout << "Computer Wins :)" << endl;
                            cout << "You = Rock & Computer = Paper " << endl;
                        } else if (comp_guess == 3) {
                            cout << "YOU Win :)" << endl;
                            cout << "You = Rock & Computer = Scissor " << endl;
                        }
                        break;
                    case 2:
                        if (comp_guess == 1) {
                            cout << "You Win The Game :)" << endl;
                            cout << "You = Paper & Computer = Rock " << endl;
                        } else if (comp_guess == 2) {
                            cout << "Draw Game..." << endl;
                            cout << "You = Paper & Computer = Paper " << endl;
                        } else if (comp_guess == 3) {
                            cout << "Computer Wins the Game!" << endl;
                            cout << "You = Paper & Computer = Scissor " << endl;
                        }
                        break;
                    case 3:
                        if (comp_guess == 1) {
                            cout << "Computer Wins the Game!" << endl;
                            cout << "You = Scissor & Computer = Rock " << endl;
                        } else if (comp_guess == 2) {
                            cout << "You Win The Game :)" << endl;
                            cout << "You = Scissor & Computer = Paper " << endl;
                        } else if (comp_guess == 3) {
                            cout << "Draw Game..." << endl;
                            cout << "You = Scissor & Computer = Scissor " << endl;
                        }
                        break;
                    case 4:
                        cout << "Successfully terminated!" << endl;
                        exit(0);
                        break;
                    default:
                        cout << "Invalid choice, please try again." << endl;
                }
                cout << "\t==========================================" << endl;
            }
        }
};

int main() {
    RockPaperScissors rps;
    rps.setData();
}
