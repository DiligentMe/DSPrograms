#include <stdio.h>
#include <conio.h>
#define stackSize 5      // Define size of stack

int stack[stackSize];     // Create Stack of specified size "stackSize"
int top = -1;             // Declare and Initialize "Top", stack will be accessed using "top" index only

// Check if stack is empty or not
int isEmpty(){
  return top+1;      // Returns 0 if empty and non-zero if not empty
}

// Check if stack if full or not
int isFull(){
  return top-(stackSize-1);  // Returns 0 if full and non-zero if not full
}

// Push an item in the stack
void push(int item){
  if(isFull() == 0){
    printf("\nStack Overflow");
  }  else {
    top = top+1;
    stack[top]=item;
  }
}

// Pop an item from the stack
void pop(){
  if(isEmpty() == 0){
    printf("\nStack is empty (Stack Underflow)");
  } else {
    printf("\nPopped value is: %d", stack[top]);
    top = top-1;
  }
}

// Item at the peek of the stack
void peek(){
  if(isEmpty() == 0){
    printf("\nStack is empty (Stack Underflow)\n");
  } else {
    printf("\nPeek item: %d", stack[top]);
  }
}

// This method is simply to demonstrate the push/pop opertion but this is operation is not allowed in stack
void displayStack(){
  int j= 0;
  if (isEmpty() == 0 ){
    printf("\nStack is empty");
  } else {
    printf("\nDisplaying stack content from bottom to Top\n");
    for (j=0; j<=top; j++){
      printf("%d ", stack[j]);
    }
  }
}

// main program

int main(){
  int item,choice;
  char more = 'y';
  printf("*******************Demonstrating Stack Operations*********************\n");
  while(more == 'y' || more == 'Y'){
    printf("\n1 -> isEmpty()\t 2 -> isFull()\t 3 -> push(item)\n4 -> pop()\t 5 -> peek()\t 6 -> displayStack()");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
            if (isEmpty() == 0)
              printf("\nStack is empty");
            else
              printf("\nStack is not empty");
            break;
     case 2:
            if (isFull() == 0)
              printf("\nStack is full");
            else
              printf("\nStack is not full");
            break;
    case 3:
            printf("\nEnter a value to push in stack: ");
            scanf("%d",&item);
            push(item);
            break;
    case 4:
            pop();
            break;
    case 5:
            peek();
            break;
    case 6:
            displayStack();
            break;
    }
    printf("\nDo you want to continue demonstration (Enter y/Y for yes): ");
    more=getch();
  }
  return 0;
}
