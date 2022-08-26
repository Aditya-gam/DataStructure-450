def getMinDiff(arr, k):
    arr.sort()
    res = arr[len(arr) - 1] - arr[0]
    small = arr[0] + k
    large = arr[len(arr) - 1] - k
    minE = 0
    maxE = 0

    for i in range(0, len(arr)-1):
        minE = min(small,  arr[i+1]-k)
        maxE = max(large, arr[i]+k)
        if minE < 0:
            continue
        res = min(res, maxE-minE)

    return res 

if __name__ == '__main__':
    print(getMinDiff([1, 5, 8, 10], 2))
    print(getMinDiff([3, 9, 12, 16, 20], 3))