def outer_func(msg):
    
    def inner_func():
        print(msg)
    return inner_func

closure=outer_func("Hello")

print(closure.__closure__)