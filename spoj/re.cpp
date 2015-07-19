#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
int test;
cin >> test;
while(test--)
{
std::string input;
cin >> input;
stack<char> stackOperator;
queue<char> queueOutput;
std::string operators = "+-*/^";
std::string res;
	for (int i = 0; i < input.size(); i++) {
		if (isalpha(input[i])) {
			queueOutput.push(input[i]);	
		} else if (operators.find(input[i]) != string::npos) {
			while (stackOperator.size() > 0 && operators.find(stackOperator.top()) != string::npos
								 && (operators.find(input[i]) <= operators.find(stackOperator.top()))) {
				queueOutput.push(stackOperator.top());
				stackOperator.pop();
			}	  
			stackOperator.push(input[i]);
		} else if (input[i] == '(') {
			stackOperator.push('(');
		} else if (input[i] == ')') {
			while (!stackOperator.empty()) {
				if (stackOperator.top() == '(') {
					stackOperator.pop();
			 		break;
				}		
				queueOutput.push(stackOperator.top());
				stackOperator.pop();
			}
		}
	}

	while (!stackOperator.empty()) {
		queueOutput.push(stackOperator.top());
		stackOperator.pop();
	}

	while (!queueOutput.empty()) {
		res += queueOutput.front();
		queueOutput.pop();
	}

	cout << res << "\n";	
 	

}
return 0;
}
