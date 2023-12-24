#include<iostream>
using namespace std;

int main() {
    int a, b, score = 0;
    cout << "In which topic you want to start your quiz:\n";
    cout << "1. Sports\t2. Games\t3. Technology\t4. Study\n";
    cin >> a;

    if (a == 1) {
        cout << "You have decided to start your quiz on Sports:\n";
        cout << "Here are 3 questions to start your quiz on Sports:\n";

        cout << "A. Who is considered the 'GOAT' (Greatest of All Time) in basketball?\n";
        cout << "1. Michael Jordan\t2. LeBron James\n3. Kobe Bryant\t4. Shaquille O'Neal\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nB. Which country hosted the 2016 Summer Olympics?\n";
        cout << "1. Brazil\t2. Russia\n3. China\t4. United States\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nC. How many players are there on a standard soccer (football) team?\n";
        cout << "1. 9\t2. 11\n3. 7\t4. 10\n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;
    }
    else if (a == 2) {
        cout << "You have decided to start your quiz on Games:\n";
        cout << "Here are 3 questions to start your quiz on Games:\n";

        cout << "A. What is the main character's name in the game 'The Legend of Zelda'?\n";
        cout << "1. Link\t2. Mario\n3. Sonic\t4. Master Chief\n";
        cin >> b;
        if (b == 1)
            score = score + 180;
        else
            score = score - 50;

        cout << "\nB. In the game 'Minecraft,' what material is used to build portals to the Nether?\n";
        cout << "1. Wood\t2. Stone\n3. Obsidian\t4. Iron\n";
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nC. Who is the creator of the 'Metal Gear Solid' series?\n";
        cout << "1. Hideo Kojima\t2. Shigeru Miyamoto\n3. Gabe Newell\t4. Todd Howard\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
    }
     else if (a == 3) {
        cout << "You have decided to start your quiz on Technology:\n";
        cout << "Here are 3 questions to start your quiz on Technology:\n";

        cout << "A. Who is the co-founder of Microsoft:\n";
        cout << "1. Steve Jobs\t2. Bill Gates\n3. Mark Zuckerberg\t4. Elon Musk\n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nB. What does CPU stand for:\n";
        cout << "1. Central Processing Unit\t2. Central Process Unit\n3. Computer Personal Unit\t4. Central Processor Unit\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nC. Which programming language is known as the 'father of all languages':\n";
        cout << "1. C++\t2. Java\t3. Fortran\t4. Assembly\n";
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;
    }
    else if (a == 4) {
        cout << "You have decided to start your quiz on Study:\n";
        cout << "Here are 3 questions to start your quiz on Study:\n";

        cout << "A. What is the capital of France?\n";
        cout << "1. London\t2. Berlin\n3. Paris\t4. Rome\n";
        cin >> b;
        if (b == 3)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nB. Who wrote the play 'Romeo and Juliet'?\n";
        cout << "1. Charles Dickens\t2. William Shakespeare\n3. Jane Austen\t4. Emily Brontë\n";
        cin >> b;
        if (b == 2)
            score = score + 100;
        else
            score = score - 50;

        cout << "\nC. What is the chemical symbol for gold?\n";
        cout << "1. Au\t2. Ag\n3. Fe\t4. Cu\n";
        cin >> b;
        if (b == 1)
            score = score + 100;
        else
            score = score - 50;
    }
    cout << "Your final score is: " << score << endl;
    return 0;
}
