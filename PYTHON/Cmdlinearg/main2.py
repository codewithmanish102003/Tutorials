import argparse

#intialize Parser
parser=argparse.ArgumentParser(description="a simple example of command line argument")

#add arguments 
parser.add_argument("name")
parser.add_argument("age",type=int,default=25)

#parse Arguments
args=parser.parse_args()

#display the arguments
print(f"name : {args.name}\nAge : {args.age}")