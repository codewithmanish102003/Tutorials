import time

def cache_closure(func):
    cache = {}  # Dictionary to store cached results
    
    def wrapper(*args):
        if args in cache:
            print(f"Using cached value for {args}")
            return cache[args]  # Return cached result
        else:
            result = func(*args)  # Call the function and compute result
            cache[args] = result  # Cache the result
            print(f"Caching result for {args}")
            return result
    
    return wrapper

@cache_closure
def slow_function(n):
    # Simulate a time-consuming operation
    time.sleep(5)
    print(f"Computing slow_function({n})...")
    return n * n

# Testing the closure with caching
print(slow_function(3))  # Computes and caches result
print(slow_function(4))  
print(slow_function(5))  
print(slow_function(3))  
print(slow_function(4))  
print(slow_function(5))  
print(slow_function(6))  
print(slow_function(3))  
print(slow_function(4))  

