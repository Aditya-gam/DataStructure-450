################## Linear Search Method   ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(1) ##################
class pair:
    def __init__(self):
        self.min = 0
        self.max = 0
 
def getMinMax(arr: list, n: int) -> pair:
    minmax = pair()
 
    # If there is only one element then return it as min and max both
    if n == 1:
        minmax.max = arr[0]
        minmax.min = arr[0]
        return minmax
 
    # If there are more than one elements, then initialize min
    # and max
    if arr[0] > arr[1]:
        minmax.max = arr[0]
        minmax.min = arr[1]
    else:
        minmax.max = arr[1]
        minmax.min = arr[0]
 
    for i in range(2, n):
        if arr[i] > minmax.max:
            minmax.max = arr[i]
        elif arr[i] < minmax.min:
            minmax.min = arr[i]
 
    return minmax
 
# Driver Code
if __name__ == "__main__":
    arr = [1000, 11, 445, 1, 330, 3000]
    arr_size = 6
    minmax = getMinMax(arr, arr_size)
    print("Minimum element is", minmax.min)
    print("Maximum element is", minmax.max)



################## Binary Search Method   ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(log n) ##################
def getMinMax(left, right, arr):
    arr_max = arr[left]
    arr_min = arr[left]
     
    # If there is only one element
    if left == right:
        return (arr[left], arr[left])
         
    # If there is only two element
    elif right == left + 1:
        return (max(arr[left], arr[right]), min(arr[left], arr[right]))
    else:
         
        # If there are more than 2 elements
        mid = int((left + right) / 2)
        arr_max1, arr_min1 = getMinMax(left, mid, arr)
        arr_max2, arr_min2 = getMinMax(mid + 1, right, arr)
 
    return (max(arr_max1, arr_max2), min(arr_min1, arr_min2))
 
# Driver code
if __name__ == '__main__':
    arr = [1000, 11, 445, 1, 330, 3000]
    right = len(arr) - 1
    left = 0
    arr_max, arr_min = getMinMax(left, right, arr)
    print('Minimum element is ', arr_min)
    print('nMaximum element is ', arr_max)



################## Compare in Pairs Method   ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(log n) ##################
def getMinMax(arr):
     
    n = len(arr)
     
    # If array has even number of elements then
    # initialize the first two elements as minimum
    # and maximum
    if(n % 2 == 0):
        mx = max(arr[0], arr[1])
        mn = min(arr[0], arr[1])
         
        # set the starting index for loop
        i = 2
         
    # If array has odd number of elements then
    # initialize the first element as minimum
    # and maximum
    else:
        mx = mn = arr[0]
         
        # set the starting index for loop
        i = 1
         
    # In the while loop, pick elements in pair and
    # compare the pair with max and min so far
    while(i < n - 1):
        if arr[i] < arr[i + 1]:
            mx = max(mx, arr[i + 1])
            mn = min(mn, arr[i])
        else:
            mx = max(mx, arr[i])
            mn = min(mn, arr[i + 1])
             
        # Increment the index by 2 as two
        # elements are processed in loop
        i += 2
     
    return (mx, mn)
     
# Driver Code
if __name__ =='__main__':
     
    arr = [1000, 11, 445, 1, 330, 3000]
    mx, mn = getMinMax(arr)
    print("Minimum element is", mn)
    print("Maximum element is", mx)