template<typename T>
int upper_bound(T arr[], int n, int target){
	int l = 0, r = n;
	while(l!=r){
		int mid = l+(r-l)/2;
		if(arr[mid]<=target)
			l = mid + 1;
		else 
			r = mid;
	}
	return l;
}

