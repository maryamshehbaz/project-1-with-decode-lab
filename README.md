# project-1-with-decode-lab
# Rule-Based AI Chatbot

## Description
This project is a simple Rule-Based AI Chatbot developed in C++.
The chatbot interacts with users by responding to predefined questions and commands using conditional statements (`if-else`). It demonstrates the basic concept of artificial intelligence through rule-based conversation rather than machine learning.

## Features
- Greets the user.
- Responds to simple predefined questions.
- Answers questions such as:
  - Hello/Hi
  - How are you?
  - What is your name?
  - Who created you?
  - What can you do?
- Ends the conversation when the user types `exit`.
- Displays a default message for unknown inputs.

## Technologies Used
- C++
- Standard Library (`iostream`, `string`)

## How It Works
The chatbot continuously accepts user input inside a loop. It compares the input with predefined phrases using `if-else` statements and prints the corresponding response. If the input does not match any stored rule, the chatbot replies with a default message.

## How to Run
1. Compile the program using any C++ compiler.
2. Run the executable.
3. Type your messages.
4. Type `exit` to end the chat.

## Example

```
You: hello
Bot: Hello! How can I help you today?

You: what is your name
Bot: My name is RuleBot.

You: exit
Bot: Chat ended. Goodbye!
```

## Future Improvements
- Make input case-insensitive.
- Add more questions and responses.
- Support keywords instead of exact matching.
- Store responses in a file.
- Add a graphical user interface (GUI).
- Integrate machine learning or natural language processing.

## Author
Maryam Shehbaz
