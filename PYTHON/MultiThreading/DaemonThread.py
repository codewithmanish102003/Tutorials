import threading
import time

def background_task():
    while True:
        print("Background task running")
        time.sleep(1)

# Create a daemon thread
thread = threading.Thread(target=background_task, daemon=True)
thread.start()

time.sleep(3)  # Main thread sleeps for 3 seconds
print("Main program ends")  # After this, the daemon thread stops
