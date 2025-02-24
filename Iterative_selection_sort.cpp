void selectionSort(node* head) 
{ 
	node* temp = head; 

	// Traverse the List 
	while (temp) { 
		node* min = temp; 
		node* r = temp->next; 

		// Traverse the unsorted sublist 
		while (r) { 
			if (min->data > r->data) 
				min = r; 

			r = r->next; 
		} 

		// Swap Data 
		int x = temp->data; 
		temp->data = min->data; 
		min->data = x; 
		temp = temp->next; 
	} 
} 
