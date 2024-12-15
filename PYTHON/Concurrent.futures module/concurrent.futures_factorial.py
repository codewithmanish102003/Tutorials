from concurrent.futures import ThreadPoolExecutor
import math

def compute_factorial(n):
    return math.factorial(n)

numbers = [100, 200, 300, 400]

with ThreadPoolExecutor(max_workers=4) as executor:
    futures = [executor.submit(compute_factorial, num) for num in numbers]

    for future in futures:
        print(f"Factorial result: {len(str(future.result()))} digits")
