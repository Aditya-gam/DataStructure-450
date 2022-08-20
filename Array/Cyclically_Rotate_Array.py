def rotate(arr, n):
    for _ in range(0, n):
        a=arr[-1]
        # print(a)
        arr.insert(0,a)
        # print(arr)
        arr.pop()
        # print(arr)
    return arr

if __name__ == '__main__':
    print(rotate([1, 2, 3, 4, 5], 3))