#include <iostream>
#include <string>
#include <cctype>
#include <stack>
using namespace std;
int evaluateExpression(const string& expression) {
    stack<int> s1;
    stack<char> s2;
    int num = 0;
    bool hasn = false;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
            hasn = true;
        }

        if (!isdigit(ch) && !isspace(ch) || i == expression.length() - 1) {
            if (hasn) {
                s1.push(num);
                num = 0;
                hasn = false;
            }

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                while (!s2.empty() && s2.top() != '(') {
                    char op = s2.top();
                    s2.pop();

                    int right = s1.top();
                    s1.pop();

                    if (s1.empty()) return -1;  // In case of invalid expression
                    
                    int left = s1.top();
                    s1.pop();

                    switch (op) {
                        case '+': s1.push(left + right); break;
                        case '-': s1.push(left - right); break;
                        case '*': s1.push(left * right); break;
                        case '/':
                            if (right == 0) return -1;  // Division by zero
                            s1.push(left / right);
                            break;
                    }
                }
                s2.push(ch);
            }
        }
    }

    while (!s2.empty()) {
        char op = s2.top();
        s2.pop();

        int right = s1.top();
        s1.pop();

        if (s1.empty()) return -1;  // In case of invalid expression

        int left = s1.top();
        s1.pop();

        switch (op) {
            case '+': s1.push(left + right); break;
            case '-': s1.push(left - right); break;
            case '*': s1.push(left * right); break;
            case '/':
                if (right == 0) return -1;  // Division by zero
                s1.push(left / right);
                break;
        }
    }

    return s1.top();
}

int main() {
    string input;
    getline(cin, input);
    int result = evaluateExpression(input);
    cout<<result<<endl;

    return 0;
}
