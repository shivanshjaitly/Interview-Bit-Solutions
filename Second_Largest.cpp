class Solution{
public:	
	// Function returns the second
	
	
	int sLargest(int arr[], int n){
	    
	    int largest = arr[0];
	    int sLargest = -1;
	    
	    for(int i = 1; i < n; i++){
	        if(arr[i] > largest){
	            sLargest = largest;
	            largest = arr[i];
	        }else if(arr[i] < largest && arr[i] > sLargest){
	        sLargest = arr[i];
	    }
	    } 
	    return sLargest;
	}
	int print2largest(int arr[], int n) {
	    
	    int secondLargest = sLargest(arr, n);
	    return secondLargest;
	    
	}
};
