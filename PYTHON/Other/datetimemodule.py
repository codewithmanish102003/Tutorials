from datetime import datetime, timedelta

# Get current time
now = datetime.now()

# Create a timedelta of 5 days
delta = timedelta(days=5)

# Calculate a new date
new_date = now + delta

print(f"Current Date and Time: {now}")
print(f"New Date (5 days later): {new_date}")
