import threading

event = threading.Event()

def wait_for_event():
    print("Thread waiting for event to be set")
    event.wait()  # Blocks until the event is set
    print("Event is set, thread is continuing")

thread = threading.Thread(target=wait_for_event)
thread.start()

input("Press Enter to set the event...")  # Wait for user input
event.set()  # Signals the waiting thread to proceed

