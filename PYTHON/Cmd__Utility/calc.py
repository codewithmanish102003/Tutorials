import argparse

# Create the parser
parser = argparse.ArgumentParser(description="A simple calculator")

# Add arguments
parser.add_argument("num1", type=float, help="First number")
parser.add_argument("num2", type=float, help="Second number")
parser.add_argument("operation", type=str, help="Operation (add, subtract, multiply, divide)")

# Parse the arguments
args = parser.parse_args()

# Define the operations
if args.operation == "add":
    result = args.num1 + args.num2
elif args.operation == "subtract":
    result = args.num1 - args.num2
elif args.operation == "multiply":
    result = args.num1 * args.num2
elif args.operation == "divide":
    result = args.num1 / args.num2
else:
    print("Unsupported operation")
    exit(1)

# Output the result
print(f"The result is: {result}")
