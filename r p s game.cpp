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
                        // you = Rock 
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
                        // you = Paper
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
                        // you = Scissor
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
//    system("cls");
    rps.setData();
}