from sys import maxsize
################## Method-1 ##################
def maxSubArraySum(arr):
    for i in range(1, len(arr)):
        if arr[i-1] > 0:
            arr[i] = arr[i] + arr[i-1]
    return max(arr)

if __name__ == '__main__':
    print(maxSubArraySum([1,2,3,-2,5]))
    print(maxSubArraySum([-1,-2,-3,-4]))



################## Method-1 ##################
def maxSubArraySum(arr):
    totalSum = -maxsize - 1
    cursum = 0

    for i in range(0, len(arr)):
        cursum += arr[i]
        totalSum = max(totalSum, cursum)

        if cursum < 0:
            cursum = 0
    return totalSum

if __name__ == '__main__':
    print(maxSubArraySum([1,2,3,-2,5]))
    print(maxSubArraySum([-1,-2,-3,-4]))
