'''
Stack Implementation
'''
stackSize = 5           # Define the size of the stack
stack = []               # Created empty stack
top = -1                 # top initialized to -1

# Function to check if stack is Full
def isFull():
    return top - (stackSize - 1)      # Returns 0 if Full, non-zeor if not

# Function to check if stack if Empty
def isEmpty():
    return top + 1                    # Returns 0 if Empty, non-zero if not

# Function to push an item in the stack if stack is not Full
def push(item):
    global top
    if isFull() == 0:
        print("Stack is Full (Stack Overflow)")
    else:
        top = top + 1
        stack.append(item)

#Function to pop an item from the stack if stack is not Empty
def pop():
    global top
    if isEmpty() == 0:
        print("Stack is Empty (Stack Underflow)")
    else:
        print("Popped item is: ", stack[top])
        stack.pop(top)
        top = top - 1

#Display the item at the peek of the stack i.e. last item inserted
def peek():
    if isEmpty() == 0:
        print("Stack is Empty (Stack Underflow)")
    else:
        print("Peek item is ", stack[top])

#Display the items in that stack
#This is not the basic operation of stack but its is just used here to show the content for understanding operations
def displayStack():
    if isEmpty() == 0:
        print("There is no item in the stack")
    else:
        for i in range(0, top+1):
            print(stack[i], end=" ")
        print()

#Main program begins from here
print("*******************Demonstrating Stack************************")
while True:
    print("Chose your option:-\n1 -> isEmpty()\t2 -> isFull()\t3 -> push()\n4 -> pop()\t5 -> peek()\t6 -> displayStack()\n Any other integer to stop")
    choice = int(input('Enter your choice: '))
    if choice == 1:
        if isEmpty() == 0:
            print("Stack is Empty (Stack Underflow)")
        else:
            print("Stack is not empty")
    elif choice == 2:
        if isFull() == 0:
            print("Stack is Full (Stack Overflow)")
        else:
            print("Stack is not full")
    elif choice == 3:
        data = int(input('Enter the value to push in stack: '))
        push(data)
    elif choice == 4:
        pop()
    elif choice == 5:
        peek()
    elif choice == 6:
        displayStack()
    else:
        print("Closing demonstration")
        break
