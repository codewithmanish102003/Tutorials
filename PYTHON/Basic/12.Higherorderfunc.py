def apply_function(func, value):
    return func(value)

# def square(x):
#     return x * x

# result = apply_function(square, 5)
result=(apply_function(lambda n:n*n,5))
print(result)  # Output: 25
