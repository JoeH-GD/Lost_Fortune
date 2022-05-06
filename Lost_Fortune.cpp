// Lost_Fortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<thread>
#include<chrono>


using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::isdigit;
using namespace std::chrono_literals;

int main()
{
    const size_t GOLD_PIECES = 1000;
    size_t adventurers, killed, survivors;
    string leader;
    bool faultyInput = false;
    auto confirmation = ' ';

    cout << "Hello, brave hero and wellcome to the game of Lost Fortune." << endl;

    //Проверка корректного ввода
    do {
        cout << "Enter a number up to a 100: " << endl;
        cin >> adventurers;

    } while (adventurers <= 0 || adventurers > 100);

    do {
        cout << "Enter a number smaller than the first: " << endl;
        cin >> killed;
    } while (killed < 0 || killed >100 || killed >= adventurers);

    survivors = adventurers - killed;

    //no numbers! you, smart **ses
    do {
        cout << "Enter your last name: " << endl;
        cin >> leader;


        for (auto& letter : leader)
        {
            if (isdigit(letter)) {
                faultyInput = true;
                break;
            }
            else faultyInput = false;
        }

        if (faultyInput) {
            cout << "Your phone number I want not, your last name I aksed for!" << endl;
        }
    } while (faultyInput);

    cout << "So be it \n\tthe story begins..." << endl;

    std::this_thread::sleep_for(3s);
    system("cls");
    cout << "A legend of great fortune in the Northern caves has spread thoughout the lands." << endl;
    cout << adventurers << " brave adventurers have ventured to the depths of the Great Mountain to find the treasure." << endl;
    cout << "They were led by the legendary rouge " << leader << endl;
    cout << "But the great fortune had an even greater protection. \nA group of ghosts - previous owners of the treasure attacked the group. ";
    cout << "\nAll " << adventurers << " fought bravely and the ghost were defeated" << endl;
    cout << "However their victory was paid for in blood. " << killed << " adventurers were killed." << endl;
    cout << "Only " << survivors << " of them and the rouge " << leader << " maneged to survive" << endl;
    cout << "The spirits of the adventurers were crushed. \nThey decided not to go any furter and to put their deseased friends to rest" << endl;
    cout << "It was then, when they discovered the legendary treasure. It was " << GOLD_PIECES << " gold pieces" << endl;
    cout << "They split the fortune." << leader << " decided hold on to " << GOLD_PIECES % survivors << " extra gold pieces " << endl;
    cout << "to keep things fair ofcourse...";
    cout << endl;
    cout << endl;
    cout << "The end.\n Or is it?...";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Now that you know how this game works..." << endl;
    cout << "Given the chance to play again, what numbers would you use?" << endl;
    cout << "Don't tell me. But answer to yourself what is your great fortune?"<< endl;

}


