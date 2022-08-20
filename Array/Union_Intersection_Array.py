def union(arr1, arr2):
    return len(set(arr1+arr2))

def intersection(arr1, arr2):
    # list3 = [val for val in arr1 if val in arr2]
    # return len(list3)
    return len(list(set(arr1) & set(arr2)))

if __name__ == '__main__':
    print(union([85, 25, 1, 32, 54, 6], [85, 2]))
    print(union([1, 2, 3, 4, 5], [1, 2, 3]))
    print(intersection([85, 25, 1, 32, 54, 6], [85, 2]))
    print(intersection([1, 2, 3, 4, 5], [1, 2, 3]))