#include <stdio.h>
int main() {
	int A[] = { 10, 20, 30, 40, 50};     // Declaration and Initialization
	int i = 0, j = sizeof(A)/sizeof(int);           // Array Size/No of Element Calculation
	int at=0, lookingFor, updateKth;          // at-> Index    lookingFor-> Element to be searched   updateKth-> Index
	printf("Enter an index value where Insert/Delete operation is desired: ");
	scanf("%d",&at);  //Enter the index where you want to insert/delete
	printf("Enter a value which will be searched: ");
	scanf("%d", &lookingFor);   // Enter the element you are looking for
	printf("Enter an index value where update operation is desired: ");
	scanf("%d", &updateKth);   // Enter the index, where the value needs to be updated

	/********************* Traverse Array **********************/
	printf("Elements of the Array are :\n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);
 /********************* Traverse Array **********************/
 /**********Insert an item in the array ************************/
	// At the beginning of the array i.e. 0 index
	// At the end of the array i.e. last index (No Of Elements - 1)
	// At any given possible index

	int t1 = 70;      // Assumed a value 70 for insertion
	int t2 = A[0];
	for (i =0; i< j; i++) {
		A[i]=t1;        // A[0] = 70;     // Beginning of the array i.e. 0 index
		t1 = t2;
		if (i!= j-1)
			t2 = A[i+1];
	}

	printf("\nAfter Insertion at Index 0: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);

	A[(sizeof(A)/sizeof(int)) -1] = 80;     // End of the array i.e. last index (No Of Elements - 1) // Assumed a value 80 for insertion

	printf("\nAfter Insertion at last Index: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);

	t1 = 100;	     // Assumed a value 100 for insertion
	t2 = A[at];
	for (i =at; i< j; i++) {
		A[i]=t1;        // A[at] = 100;    // At any given possible index
		t1 = t2;
		if (i!= j-1)
			t2 = A[i+1];
	}

	printf("\nAfter Insertion at Index %d: \n",at);
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);
	/**************** End of Insertion ***********************/

	/****************** Deletion an item from an Array *********************/
	// From the beginning of the array i.e. 0 index
	// From the end of the array i.e. last index (No Of Elements - 1)
	// From any given possible index

	for(i=0; i<j; i++){
		if (i != j-1)
			A[i] = A[i+1];       // Deleted First element at first execution
	}

	printf("\nAfter Deleting first element: \n");
	for(i = 0; i<j; i++)
	printf("A[%d] = %d\t", i, A[i]);

	// Deletion from last is simply not accessing it or putting some meaningless data in the working context

	for(i=at; i<j; i++){
		if (i != j-1)
			A[i] = A[i+1];       // Deleted the element at given position at first execution
	}

	printf("\nAfter Deleting from %d Index: \n", at);
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);

	/************* End of Deletion ************************/

	/***************** Searching for an element in an Array **********************/
	int flagToFoundCheck = 0;
	for(i=0; i< j ;i++){
		if (A[i] == lookingFor){
			flagToFoundCheck = 1;
			break;
		}
	}

	if (flagToFoundCheck == 1)
		printf("\n%d found at %d Index\n",lookingFor,i);
	else
		printf("\n%d not found in the array\n");
	/***************** End of Searching for an element in an Array **********************/

	/****************************** Update an element in an array ***********************/
	A[updateKth] = 200;                // Assumed a value 200 for insertion
	printf("\nUpdated Array: \n");
	for(i = 0; i<j; i++)
		printf("A[%d] = %d\t", i, A[i]);
	/****************************** End of Update an element in an array ***********************/
	return 0;
}
