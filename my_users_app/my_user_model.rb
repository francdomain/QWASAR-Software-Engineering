require 'sqlite3'

class User
    attr_accessor :id, :firstname, :lastname, :age, :password, :email

    def initialize (id=0, firstname, lastname, age, password , email)
        @id = id
        @firstname = firstname
        @lastname = lastname
        @age = age
        @password = password
        @email = email
    end

    def self.connection
        begin
            @db = SQLite3::Database.open 'db.sql'
            @db.results_as_hash = true
            @db.execute <<-SQL
            CREATE TABLE IF NOT EXISTS users (
                id INTEGER PRIMARY KEY,
                firstname string,
                lastname string,
                age integer,
                password string,
                email string
            );
            SQL
            return @db
        rescue SQLite3::Exception => e
            puts "Error Occured: "
            puts e
        end
    end

    def self.create(user_info)
        @db = self.connection
        @db.execute <<-REQUEST
        INSERT INTO users (firstname, lastname, age, password, email) VALUES ("#{user_info[:firstname]}",
        "#{user_info[:lastname]}",
        "#{user_info[:age]}",
        "#{user_info[:password]}",
        "#{user_info[:email]}");
        REQUEST

        userData = User.new(user_info[:firstname], user_info[:lastname], user_info[:age], user_info[:password], user_info[:email])
        userData.id = @db.last_insert_row_id
        @db.close
        return userData
    end

    # retrieves users information using the user id
    def self.find(user_id)
        @db = self.connection
        getUser = @db.execute <<-REQUEST
        SELECT * FROM users WHERE id = #{user_id};
        REQUEST
        userData = User.new(getUser[0]["firstname"], getUser[0]["lastname"], getUser[0]["age"], getUser[0]["password"], getUser[0]["email"])
        @db.close
        return userData
    end

    def self.all
        @db = self.connection
        allUsers = @db.execute <<-REQUEST
        SELECT * FROM users;
        REQUEST
        @db.close
        return allUsers
    end

     # retrieves user's information using the user id, update and returns the updated info
    def self.update(user_id, attribute, value)
        @db = self.connection
        @db.execute <<-REQUEST
        UPDATE users
        SET #{attribute} = '#{value}'
        WHERE id = #{user_id};
        REQUEST
        updatedUser = @db.execute <<-REQUEST
        SELECT * FROM users WHERE id = #{user_id};
        REQUEST
        @db.close
        return updatedUser
    end

    # Check if user is authorized and has existing data
    def self.authentication(password, email)
        @db = self.connection
        authUser = @db.execute <<-REQUEST
        SELECT * FROM users WHERE email = '#{email}' AND password = '#{password}'
        REQUEST
        @db.close
        return authUser
    end

    # removes user's info where the id matches the user_id
    def self.destroy(user_id)
        @db = self.connection
        delUser = @db.execute <<-REQUEST
        DELETE FROM users
        WHERE id = #{user_id};
        REQUEST
        @db.close
        return delUser
    end
end
