import multiprocessing

def print_square(num):
    print(f'Square of {num} is {num * num}')

if __name__ == "__main__":
    p1 = multiprocessing.Process(target=print_square, args=(5,))
    p1.start()  # Start the process
    p1.join()   # Wait for the process to finish
