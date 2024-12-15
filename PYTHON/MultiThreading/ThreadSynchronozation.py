import threading

counter = 0
lock = threading.Lock()

def increment_counter():
    global counter
    for _ in range(1000):
        with lock:  # Lock acquired and released automatically
            counter += 1

threads = []
for i in range(10):
    thread = threading.Thread(target=increment_counter)
    threads.append(thread)
    thread.start()

for thread in threads:
    thread.join()

print(f"Final counter: {counter}")
