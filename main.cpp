#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "==============================" << endl;
    cout << "      Rule-Based AI Chatbot   " << endl;
    cout << "Type 'exit' to end the chat." << endl;
    cout << "==============================" << endl;

    while (true) {
        cout << "\nYou: ";
        getline(cin, userInput);

        if (userInput == "hi" || userInput == "hello" || userInput == "hey") {
            cout << "Bot: Hello! How can I help you today?" << endl;
        }
        else if (userInput == "how are you") {
            cout << "Bot: I'm doing great! Thanks for asking." << endl;
        }
        else if (userInput == "what is your name") {
            cout << "Bot: My name is RuleBot." << endl;
        }
        else if (userInput == "who created you") {
            cout << "Bot: I was created by a C++ programmer." << endl;
        }
        else if (userInput == "what can you do") {
            cout << "Bot: I can answer simple predefined questions." << endl;
        }
        else if (userInput == "bye") {
            cout << "Bot: Goodbye! Have a nice day!" << endl;
        }
        else if (userInput == "exit") {
            cout << "Bot: Chat ended. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Bot: Sorry, I don't understand that." << endl;
        }
    }

    return 0;
}