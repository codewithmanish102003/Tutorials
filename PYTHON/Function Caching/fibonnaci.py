from functools import lru_cache
import time

@lru_cache(maxsize=None)

def fibonacci(n):
    time.sleep(2)
    if n<2:
        return n
    return fibonacci(n-1)+fibonacci(n-2)

print(fibonacci(10))
print(fibonacci(11))
print(fibonacci(12))
print(fibonacci(10))
print(fibonacci(11))
print(fibonacci(12))