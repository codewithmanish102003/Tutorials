import mysql.connector

connection = None
try:
    connection = mysql.connector.connect(
        host="localhost",
        user="root",
        password=""
    )

    if connection.is_connected():
        print("Connected to the MySQL database server")
        print(connection)

except mysql.connector.errors.InterfaceError as e:
    # Handles the error when the server is not running
    print("Error: Could not connect to the MySQL Server.")
    print(f"Details: {e}")

finally:
    # Ensures connection exists and is connected before trying to close it
    if connection and connection.is_connected():
        connection.close()
        print("MySQL connection is closed")
