def kthSmallest(arr, k):
    arr.sort()
    return (arr[k-1])

if __name__ == '__main__':
    print(kthSmallest([7, 10, 4, 3, 20, 15], 3))
    print(kthSmallest([7, 10, 4, 20, 15], 4))