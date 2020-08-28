'''
Python does not have built-in support for C like arrays, List can be used instead.
Numpy can also be used for array.
'''

at = int(input())               # Enter an integer where insertion/deletion is expected
lookingFor = int(input())       # Enter a value which will be searched
updateKth = int(input())        # Enter an index where update operation will be done
print("You entered at = ",at," lookingFor = ",lookingFor," updateKth = ",updateKth)

arr = [10, 20, 30, 40, 50 ]         #Empty List Created
print("Initial List content: ", arr)

# Traverse the code using loop
print("List content: ", end="")
for i in arr:
    print(i, end=" ")
# End of traversal

arr.insert(0, 70)   #Insertion in the List at first index
print("\nList content after insertion at index 0: ", arr)          # Print the content of array "arr" after first Insertion

noOfElementsinList = len(arr)            # findout the total number of element inserted, i.e. number of elements in the list
arr.insert(noOfElementsinList-1, 80)      # Inset at the last index (which is one less than number of elements)
'''
#This is the other way to insert element at last index
arr.append(80)       #Insertion in the List at last index
'''
print("List content after insertion at last: ", arr)            # Print the content of array "arr" after insertion at the last index

arr.insert(at, 100)      #Insertion in the List at any index, here "at" content index value entered by user
print("List content after insertion at index ",at,": ",arr)              # Print the content of array "arr" after insertion at the last index

arr.pop(0)          #Deleting element at first index
print("List content after deleting first element: ",arr)          # Prints the remaining content

# Beginning of deletion of element at last index
noOfElementsinList = len(arr)
arr.pop(noOfElementsinList-1)
'''
# This is one other way to delete an element from last index
arr.reverse()
arr.pop(0)
arr.reverse()
'''
print("List content after deleting last element: ",arr)
# End of deletion of element at last index

arr.pop(at)             # Deleting element at any given position "at"
print("List content after deleting element at index ",at,": ",arr)              # Print the remaining content

# Beginning of search of element "lookingFor"
try:
    foundAt = arr.index(lookingFor)
    print(lookingFor, " is found at ", foundAt, " index")
except ValueError:
    print(lookingFor, " is not found in the list")
# End of Searching of element

# Beginning of update at "updateKth"
arr.pop(updateKth)
arr.insert(updateKth,200)
print("List content after updating element at index ",updateKth,": ", arr)
# End of update
