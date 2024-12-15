from sqlite3 import Cursor
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
        cursor = connection.cursor()
        # cursor.execute("Create database mydatabase;")
        # print("database Created")
        cursor.execute("use mydatabase;")
        print("connecting with mydatabase")
        # cursor.execute("create table employee (id int primary key, name varchar(2255));")
        # print("table is created")
        cursor.execute("insert into employee (id, name) values (1,'Manish');")
        
        cursor.execute("select * from employee")
        res=cursor.fetchall()
        
        for i in res:
            print(i)
        connection.close()
        print("MySQL connection is closed")
        
    
