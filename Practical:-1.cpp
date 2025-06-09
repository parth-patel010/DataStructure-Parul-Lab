//Practical:-1
//Write a program to Implement Stack operations using arrays. 

/*
===Expected Output===
Top element of stack: 3
Size of Stack after removing top: 3
Top element of stack: 2
Size of Stack after removing top: 2
Top element of stack: 1
Size of Stack after removing top: 1
*/

//top,push,pop,empty,size
#include<iostream>
#include<stack>

void printStackElement(std::stack <int> stack){
    while(!stack.empty()){
        std::cout << "Top element of stack: " << stack.top() << std::endl;
        std::cout << "Size of Stack after removing top: "<<stack.size() << std::endl;
        stack.pop();
    }
}

int main(){
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    printStackElement(stack);
    return 0;
}
