from concurrent.futures import ThreadPoolExecutor
import time

def task(n):
    time.sleep(n)
    return f"Task {n} completed"

with ThreadPoolExecutor() as executor:
    future = executor.submit(task, 3)
    
    # Check if the task is done
    while not future.done():
        print("Task is still running...")
        time.sleep(1)
    
    print(future.result())
