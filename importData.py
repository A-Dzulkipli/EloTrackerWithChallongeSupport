import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="alik",
  password="password",
  database='temp'
)

mycursor = mydb.cursor()

mycursor.execute("USE temp;")
mycursor.execute("DESCRIBE Players;")

for x in mycursor:
  print(x) 