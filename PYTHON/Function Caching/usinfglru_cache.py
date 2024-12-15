import time

from functools import lru_cache


@lru_cache(maxsize=3)
def slow_func(n):
    time.sleep(5)

    return n * n


print(slow_func(2))  # take 5 seconds
print(slow_func(3))  # take 5 seconds
print(slow_func(2))  # Quick Execution
print(slow_func(4))  # take 5 seconds
print(slow_func(5))  # take 5 seconds
