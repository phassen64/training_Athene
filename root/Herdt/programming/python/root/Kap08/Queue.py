queue = []
queue.append(2)
queue.append(3)
queue.append(5)
queue.append(7)
queue.append(11)
print("Queue nach Fertigstellung: ", queue)
while len(queue) > 0:
    print(queue.pop(0))
    print("Queue: ", queue)
