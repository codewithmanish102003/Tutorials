import sys

print(f"Script name : {sys.argv[0]} ")

if len(sys.argv)>1:
    print(f"Arguments Passed : {sys.argv[1:]}")
else:
    print("No arguments were passed.")