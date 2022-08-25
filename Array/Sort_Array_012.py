################## In-built Method   ##################
################## Time Complexity: O(n) ##################
# def sort012(arr):
#     arr.sort()
#     return arr

# if __name__ == '__main__':
#     print(sort012([0, 2, 1, 2, 0]))
#     print(sort012([0, 1, 0]))



################## Counting Method   ##################
################## Time Complexity: O(n) ##################
def sort012(arr):
    a = arr.count(0)
    b = arr.count(1)
    c = arr.count(2)
    arr = []
    for i in range(0, a):
        arr.append(0)
    for i in range(0, b):
        arr.append(1)
    for i in range(0, c):
       arr.append(2)
    return arr

if __name__ == '__main__':
    print(sort012([0, 2, 1, 2, 0]))
    print(sort012([0, 1, 0]))