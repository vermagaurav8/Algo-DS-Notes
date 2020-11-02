def binary_search(arr, low, high, find): 
	if high >= low: 
		mid = (high + low) // 2
		if arr[mid] == find: 
			return mid 
		elif arr[mid] > find: 
			return binary_search(arr, low, mid - 1, find) 
		else: 
			return binary_search(arr, mid + 1, high, find) 
	else: 
		return -1

# Sample Inputs
#arr = [ 4, 10, 12, 43, 45 ] 
#find = 43
arr=[int(i) for i in input().split(" ")]
find=int(input())
result = binary_search(arr, 0, len(arr)-1, find) 

if result != -1: 
	print("Element is present at index", str(result)) 
else: 
	print("Element is not present in array") 
