################## Iterrative Apporach   ##################
################## Time Complexity: O(n) ##################
def reverseList(A):
    start = 0
    end = len(A) - 1
    while start < end:
        A[start], A[end] = A[end], A[start]
        start += 1
        end -= 1

if __name__ == '__main__':
    A = [1, 2, 3, 4, 5, 6]
    print(A)
    reverseList(A)
    print("Reversed list is")
    print(A)    



################## Recursive Apporach   ##################
################## Time Complexity: O(n) ##################
def reverseList(A, start, end):
    if start >= end:
        return
    A[start], A[end] = A[end], A[start]
    reverseList(A, start+1, end-1)

if __name__ == '__main__':
    A = [1, 2, 3, 4, 5, 6]
    print(A)
    reverseList(A, 0, len(A)-1)
    print("Reversed list is")
    print(A)    



################## List Slicing Apporach   ##################
################## Time Complexity: O(n) ##################
def reverseList(A):
    print (A[::-1])

if __name__ == '__main__':
    A = [1, 2, 3, 4, 5, 6]
    print(A)
    print("Reversed list is")
    reverseList(A)    