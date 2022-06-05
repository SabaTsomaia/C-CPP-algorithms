// C program to convert infix expression to postfix
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[] = "12*12*12";
    infixToPostfix(exp);
    printf("%s",exp);
    return 0;
}
// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* arr;
};
 
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    
    if (!stack) // If created Succesfully
        return NULL;
 
    stack -> top = -1;
    stack -> capacity = capacity;
 
    stack->arr = (int*) malloc(stack->capacity * sizeof(int));
 
    return stack;
}


// if top == -1 it returns true Else false
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}


char peek(struct Stack* stack)
{
    return stack->arr[stack->top];
}

// Remove Last element
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->arr[stack->top--];
    return '$';
}

// Push str to stack  (op)
void push(struct Stack* stack, char op)
{
    stack->arr[++stack->top] = op;
}
 
// Checking if Anything other than * / +  - is number 
int isOperand(char ch)
{
    return (ch >= 48 && ch <= 57);
}
 
// Taking Order to push and pop 
int Order(char ch)
{
    switch (ch)
    {
    case '+':
    	return 1;
    case '-':
        return 1;
 
    case '*':
    	return 2;
    case '/':
 		return 2;
 	
    case '^':
        return 3;
    }
    return 0;
}
 
// Converts Infix To postfix
int infixToPostfix(char* str)
{
    int i, k;

    // Create a stack Capacity Same as expression size
    struct Stack* stack = createStack(strlen(str));
	if(!stack) // See if stack was created successfully
        return 0;
 
    for (i = 0, k = -1; str[i]; ++i)
    {
        // If the scanned character is
        // an operand, add it to output.
        if (isOperand(str[i]))
            str[++k] = str[i];
        else // an operator is encountered
        {
        	// isEmpty == False   !isEmpty == True
        	printf("%d\n",!isEmpty(stack));
            
			while (!isEmpty(stack) && Order(str[i]) <= Order(peek(stack)))
            {
                str[++k] = pop(stack);
			}
        	push(stack, str[i]);
		}
 
    }
 
    // pop all the operators from the stack
    while (!isEmpty(stack)) {
    	str[++k] = pop(stack);
		}
		
	str[++k] = '\0';
    printf("%s", str);
}
 

