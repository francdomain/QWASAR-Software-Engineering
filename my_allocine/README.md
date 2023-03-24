# Welcome to My Allocine
***

## Task
The mission is to write all the corresponding sql request in the file bellow.

Here is the file:
requests['Display all actors'] = "SELECT * FROM actors;"
requests['Display all genres'] = ""
requests['Display the name and year of the movies'] = ""
requests['Display reviewer name from the reviews table'] = ""

requests["Find the year when the movie American Beauty released"] = ""
requests["Find the movie which was released in the year 1999"] = ""
requests["Find the movie which was released before 1998"] = ""
requests["Find the name of all reviewers who have rated 7 or more stars to their rating order by reviews rev_name (it might have duplicated names :-))"] = ""
requests["Find the titles of the movies with ID 905, 907, 917"] = ""
requests["Find the list of those movies with year and ID which include the words Boogie Nights"] = ""
requests["Find the ID number for the actor whose first name is 'Woody' and the last name is 'Allen'"] = ""

requests["Find the actors with all information who played a role in the movies 'Annie Hall'"] = ""
requests["Find the first and last names of all the actors who were cast in the movies 'Annie Hall', and the roles they played in that production"] = ""

requests["Find the name of movie and director who directed a movies that casted a role as Sean Maguire"] = ""
requests["Find all the actors who have not acted in any movie between 1990 and 2000 (select only actor first name, last name, movie title and release year)"] = ""

## Description
The sample database represents some of the data storage and retrieval about a movie related industry. Most of the people loves to watch movie, and for all of them we are providing a sample information about the movie related questions coming to their mind. This design of database will make it easier to the movie lovers to know the curiosities about the movies.

For this project, a database containing multiple tables was provided. Here is a description of all the tables:
Description of tables:

actors:
id – this is a unique ID for each actor
act_fname – this is the first name of each actor
act_lname – this is the last name of each actor
act_gender – this is the gender of each actor

genres:
id – this is a unique ID for each genres
gen_title – this is the description of the genres

directors:
id – this is a unique ID for each director
dir_fname – this is the first name of the director
dir_lname – this is the last name of the director

movies:
id – this is the unique ID for each movie
mov_title – this column represents the name of the movie
mov_year – this is the year of making the movie
mov_time – duration of the movie i.e. how long it was running
mov_lang – the language in which movie was casted
mov_dt_rel – this is the release date of the movie
mov_rel_country – this is the name of the country(s) where the movie was released

movies_genres:
mov_id – this is the ID of the movie, which is referencing the mov_id column of the table movies
gen_id – this is the ID of each genres, which is referencing the gen_id column of the table genres

directors_movies:
dir_id – this is the ID for each director, which is referencing the dir_id column of the table directors
mov_id – this is the ID of the movie, which is referencing the mov_id column of the table movies

reviews:
id – this is the unique ID for each reviewer
rev_name – this is the name of the reviewer

movies_ratings_reviews:
mov_id –this is the ID of the movie, which is referencing the mov_id column of the table movies
rev_id – this is the ID of the reviewer, which is referencing the rev_id column of the table reviews
rev_stars – this is indicates how many stars a reviewer rated for a review of a movie
num_o_rating – this indicates how many ratings a movie achieved

movies_actors:
act_id – this is ID of actor, which is referencing the act_id column of actors table
mov_id – this is the ID of the movie, which is referencing the mov_id column of the table movies
role – this is the name of a character in the movie, an actor acted for that character

Objectives
Write SQL requests. Simple, and some more complicated ;-)

Submit your work
For automatic tests purposes, you will write your SQL requests inside a file named: my_allocine.rb.
It will be formatted like this:

requests[REQUEST_DESCRIPTION_1] = "SQL_REQUEST_1"
requests[REQUEST_DESCRIPTION_2] = "SQL_REQUEST_2"

Tools:
1# Download the database:
wget https://storage.googleapis.com/qwasar-public/track-claris/movies.db

2# Connect to the database with Sqlite:
$>sqlite3 movies.db
SQLite version 3.32.3 2020-06-18 14:16:19
Enter ".help" for usage hints.
sqlite>

3# Type in the command line to perform sql queries:
sqlite> SELECT * FROM genres;
1001|Action
1002|Adventure
1003|Animation
1004|Biography
1005|Comedy
1006|Crime
1007|Drama
1008|Horror
1009|Music
1010|Mystery
1011|Romance
1012|Thriller
1013|War
sqlite>
4# exit with: Ctrl + D

## Installation
The project can be installed by using gem

## Usage
It can be used to provide information about the movie related questions coming to mind.
```
./my_allocin argument1 argument2
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
