#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cctype>

// Function to determine the precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to convert infix expression to postfix (Reverse Polish Notation)
std::vector<std::string> infixToPostfix(const std::string& infix) {
    std::stack<char> operators;
    std::vector<std::string> postfix;
    std::string number;

    for (char c : infix) {
        if (isdigit(c) || isalpha(c)) {
            // Append digit or character to the current number/variable
            number += c;
        } else {
            // If we encounter an operator and there is a number/variable before it, add it to the postfix list
            if (!number.empty()) {
                postfix.push_back(number);
                number.clear();
            }
            // Process the operator
            if (c == '(') {
                operators.push(c);
            } else if (c == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    postfix.push_back(std::string(1, operators.top()));
                    operators.pop();
                }
                operators.pop(); // Remove the '(' from the stack
            } else {
                while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                    postfix.push_back(std::string(1, operators.top()));
                    operators.pop();
                }
                operators.push(c);
            }
        }
    }

    // Add the last number/variable to the postfix list
    if (!number.empty()) {
        postfix.push_back(number);
    }

    // Pop all the operators left in the stack
    while (!operators.empty()) {
        postfix.push_back(std::string(1, operators.top()));
        operators.pop();
    }

    return postfix;
}

int main() {
    std::string infix = "a+b*(c^d-e)^(f+g*h)-i";
    std::vector<std::string> postfix = infixToPostfix(infix);

    std::cout << "Infix: " << infix << std::endl;
    std::cout << "Postfix: ";
    for (const auto& token : postfix) {
        std::cout << token << " ";
    }
    std::cout << std::endl;

    return 0;
}
