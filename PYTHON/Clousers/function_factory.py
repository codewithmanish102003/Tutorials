def multiplier(factor):
    
    def multi_by_factor(num):
        return num*factor
    return multi_by_factor

times3=multiplier(3)
print(times3(10))