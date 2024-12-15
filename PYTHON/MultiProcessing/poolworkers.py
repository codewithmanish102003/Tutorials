from multiprocessing import Pool

def square(x):
    return x * x

if __name__ == "__main__":
    with Pool(processes=4) as pool:  # Create a pool of 4 worker processes
        results = pool.map(square, range(10))  # Apply the function to the range

    print(results)  # Output: [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
