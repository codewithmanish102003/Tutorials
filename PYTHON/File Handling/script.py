import mysql.connector
from mysql.connector import Error

def connect_to_database():
    try:
        # Establish the connection
        connection = mysql.connector.connect(
            host='localhost',
            database='student',  # Replace with your actual database name
            user='root',        # XAMPP uses 'root' as default
            password=''         # No password for 'root' by default in XAMPP
        )

        if connection.is_connected():
            print("Connected to MySQL database")

            # Querying the database
            cursor = connection.cursor()
            cursor.execute("SELECT DATABASE();")
            db_name = cursor.fetchone()
            print(f"You're connected to: {db_name}")

            # Example: Retrieving data from a table
            cursor.execute("SELECT * FROM bca;")  # Replace 'your_table' with actual table name
            result = cursor.fetchall()

            print("Query result:")
            for row in result:
                print(row)

            cursor.close()

    except Error as e:
        print(f"Error connecting to MySQL: {e}")

    finally:
        if connection.is_connected():
            connection.close()
            print("MySQL connection is closed")


if __name__ == "__main__":
    connect_to_database()
