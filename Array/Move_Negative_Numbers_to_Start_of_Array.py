################## In-Built Method   ##################
################## Time Complexity: O(n*log(n)) ##################
################## Space Complexity: O(n) ##################
def rearrange(arr):
    arr.sort()
    return arr

if __name__ == '__main__':
    print(rearrange([-1, 2, -3, 4, 5, 6, -7, 8, 9]))
    print(rearrange([-12, 11, -13, -5, 6, -7, 5, -3, -6]))



################## Partition Method   ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(1) ##################
def rearrange(arr):
    j = 0
    for i in range(0, len(arr)):
        if(arr[i] < 0):
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
            j += 1
    return arr

if __name__ == '__main__':
    print(rearrange([-1, 2, -3, 4, 5, 6, -7, 8, 9]))
    print(rearrange([-12, 11, -13, -5, 6, -7, 5, -3, -6]))



################## Two Pointer Method   ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(1) ##################
def rearrange(arr, left, right):
    while left < right:
        if arr[left] < 0 and arr[right] < 0:
            left += 1
        elif arr[left] > 0 and arr[right] < 0:
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
            right -= 1
        elif arr[left] > 0 and arr[right] > 0:
            right -= 1
        else:
            left += 1
            right -= 1
    return arr

if __name__ == '__main__':
    print(rearrange([-1, 2, -3, 4, 5, 6, -7, 8, 9], 0, len([-1, 2, -3, 4, 5, 6, -7, 8, 9]) - 1))
    print(rearrange([-12, 11, -13, -5, 6, -7, 5, -3, -6], 0, len([-12, 11, -13, -5, 6, -7, 5, -3, -6]) - 1))



################## Dutch National Flag Algorithm ##################
################## Time Complexity: O(n) ##################
################## Space Complexity: O(1) ##################
def rearrange(arr):
    low, high = 0, len(arr) - 1
    while low < high:
        if arr[low] < 0:
            low += 1
        elif arr[high] > 0:
            high -= 1
        else:
            arr[low], arr[high] = arr[high], arr[low]
    return arr

if __name__ == '__main__':
    print(rearrange([-1, 2, -3, 4, 5, 6, -7, 8, 9]))
    print(rearrange([-12, 11, -13, -5, 6, -7, 5, -3, -6]))