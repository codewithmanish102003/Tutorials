import multiprocessing
import time

def worker(number):
    print(f'Worker {number} started')
    time.sleep(2)  # Simulate a time-consuming task
    print(f'Worker {number} finished')

if __name__ == "__main__":
    processes = []
    
    for i in range(5):  # Create 5 worker processes
        p = multiprocessing.Process(target=worker, args=(i,))
        processes.append(p)
        p.start()  # Start the process

    for p in processes:
        p.join()  # Wait for all processes to finish

    print('All workers finished.')
