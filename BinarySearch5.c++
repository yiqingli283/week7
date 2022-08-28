template<typename T>
int ceil(T arr[], int n, int target){
	int l = 0, r = n;
	//寻找比target大的最小值得索引
	while(l<r){
		int mid = l+(r-l)/2;//向下取整防止进入死循环
		if(arr[mid]<=target)
			l = mid +1;
		else
			r = mid;
	}
	assert(l == r)
	if(r-1>=0 && arr[r-1] == target)
		return r-1;//找到target元素，返回最后一个target元素位置，及r-1
	else
		return r;//否则返回比target大的最小值相应的索引，也就是r本身
}
