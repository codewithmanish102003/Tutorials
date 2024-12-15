import multiprocessing

def sender(q):
    q.put("Hello from another process!")

def receiver(q):
    message = q.get()
    print(f"Received message: {message}")

if __name__ == "__main__":
    q = multiprocessing.Queue()
    p1 = multiprocessing.Process(target=sender, args=(q,))
    p2 = multiprocessing.Process(target=receiver, args=(q,))
    p1.start()
    p2.start()
    p1.join()
    p2.join()
