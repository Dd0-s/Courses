def sifting_up(heap):
    index = len(heap) - 1
    while True:
        if(index == 0):
            break
        elif(heap[index] > heap[(index + 1) // 2 - 1]):
            heap[index], heap[(index + 1) // 2 - 1] = heap[(index + 1) // 2 - 1], heap[index]
            index = (index + 1) // 2 - 1
        else:
            break
            
def sifting_down(heap):
    index = 0
    while True:
        if(2 * index + 2 < len(heap)):
            if(heap[index] < max(heap[2 * index + 1], heap[2 * index + 2])):
                if(heap[2 * index + 1] > heap[2 * index + 2]):
                    heap[index], heap[2 * index + 1] = heap[2 * index + 1], heap[index]
                    index = 2 * index + 1
                else:
                    heap[index], heap[2 * index + 2] = heap[2 * index + 2], heap[index]
                    index = 2 * index + 2
            else:
                break;
        elif(2 * index + 1 < len(heap)):
            if(heap[index] < heap[2 * index + 1]):
                heap[index], heap[2 * index + 1] = heap[2 * index + 1], heap[index]
                index = 2 * index + 1
            else:
                break;         
        else:
            break
            
            
n = int(input())
heap = []
for i in range(n):
    ask = input().split()
    if(ask[0] == "Insert"):
        heap.append(int(ask[1]))
        sifting_up(heap)
    if(ask[0] == "ExtractMax"):
        heap[0], heap[-1] = heap[-1], heap[0]
        maximum = heap.pop()
        sifting_down(heap)
        print(maximum)
