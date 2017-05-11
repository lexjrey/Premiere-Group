#include <cstdlib>
#include <stack>
#include "variable.cc"
#include "operators.h"
using namespace std;

int math(string ops, int x, int y){
	int answer = 0;
		if (ops == "+") {
			answer = add(x, y);
		}
		else if (ops == "-") {
			answer = subtract(x, y);
		} else if (ops == "*") {
			answer = multiply(x, y);
		} else if (ops == "/") {
			answer = divide(x, y);
		} else if (ops == "^") {
			answer = exp(x, y);
		} else if (ops == "%") {
			answer = mod(x, y);
		}
	return answer;
}

int main() {

stack<string> ops;
stack<int> number;






string operation;
int operand = 0;


	while (cin) {
			cin>> ws;
			int c = cin.peek();
			
			if(!cin) die();
			if (c == EOF) break; // if it's the end of file, quit.
			if (!isdigit(c)) { // is the next input a digit or not

				cin >> operation; // if not a digit, than must be operation/command

				if (operation == "QUIT" || operation == "quit") return 0;
				else if (operation == "LET") { //where we assign variables values
					
	
				}

				else {
						ops.push(operation);
					cout<<"operation stack top is " << ops.top()<<endl;
				}

			}

			else if (isdigit(c)) {

				cin>>operand;	
					number.push(operand);
				cout<<"number stack top is " <<number.top()<<endl;
			}
		
		}
//at this point all of the input of that line is on the stacks
cout<<"-------------------------------------------"<<endl;
	while(number.size() > 1){

int x =	number.top();
	number.pop();
int y =	number.top();
	number.pop();
string z = ops.top();
if(ops.size() >= 1)	ops.pop();
int it = math(z, x, y);
number.push(it);
	//get the numbers and operator off of their respective stacks
}

cout<<number.top()<<endl;
	}




