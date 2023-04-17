# Welcome to My Users App
***

## Task
This project will implement a very famous architecture: MVC (Model View Controller)

## Description
PART I
Create a class User, it will be your interface in order to

create user
find user
get all users
update user
destroy user in sqlite.
You will use the gem sqlite3.
The sqlite filename will be named db.sql.

Your table will be name users and will have multiple attributes:

firstname as string
lastname as string
age as integer
password as string
email as string
Your class will have the following methods:

def create(user_info)
It will create a user. User info will be: firstname, lastname, age, password and email
And it will return a unique ID (a positive integer)

def find(user_id)
It will retrieve the associated user and return all information contained in the database.

def all
It will retrieve all users and return a hash of users.

def update(user_id, attribute, value)
It will retrieve the associated user, update the attribute send as parameter with the value and return the user hash.

def destroy(user_id)
It will retrieve the associated user and destroy it from your database.


PART II
Create a controller. You will use your User class from Part I. Your route will return a JSON.

It will have multiple routes:

GET on /users. This action will return all users (without their passwords).

POST on /users. Receiving firstname, lastname, age, password and email. It will create a user and store in your database and returns the user created (without password).

POST on /sign_in. Receiving email and password. It will add a session containing the user_id in order to be logged in and returns the user created (without password).

PUT on /users. This action require a user to be logged in. It will receive a new password and will update it. It returns the user created (without password).

DELETE on /sign_out. This action require a user to be logged in. It will sign_out the current user. It returns nothing (code 204 in HTTP).

DELETE on /users. This action require a user to be logged in. It will sign_out the current user and it will destroy the current user. It returns nothing (code 204 in HTTP).

For the signed in method, we will be using session & cookies. In order to perform a request with curl and save cookies
(Be aware it's not the same flags to save & load).

PART III
Create subdirectory views and inside, create a file named: index.html

## Installation
The project can be install by using the gem install.
To run the server and create data base: ruby app.rb

## Usage
To test with curl requests
POST on /users to create a new user

curl -X POST -i http://localhost:8080/users -d "firstname=Frank" -d "lastname=Chuks" -d "age=34" -d "password=franc14" -d "email=nero@gmail.com"

GET on /users to return all users (without their passwords)

curl http://localhost:8080/users

POST on /sign_in (it needs to receive an email and a password)

curl -c cookies.txt -X POST localhost:8080/sign_in -d email=nero@gmail.com -d password=franc14

PUT on /users to update a password and return a hash with the user's information

user needs to be signed in (POST on /sign_in)
copy cookies from previous POST requests (for signing in)

curl -b cookies.txt -X PUT localhost:8080/users -d password=franc14      

DELETE on /sign_out

user needs to be signed in (POST on /sign_in)
copy cookies from previous POST requests (for signing in)

curl -b cookies.txt -X DELETE localhost:8080/sign_out       

DELETE on /users to delete user

user needs to be signed in (POST on /sign_in)

curl -b cookies.txt -X DELETE localhost:8080/users 

```
./my_users_app argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
