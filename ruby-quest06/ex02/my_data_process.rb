def give_value_to_resultant(resultant, key, value)
    if !resultant[key].include?(value)
        resultant[key][value] = 1
    else
        resultant[key][value] += 1
    end
end

def my_data_process(input_data)
    resultant = {"Gender"=> {}, "Email"=> {}, "Age"=> {}, "City"=> {}, "Device"=> {}, "Order At"=> {}}

    input_data[1...].each do |line|
        valuesAdded = line.split(",")

        give_value_to_resultant(resultant, "Gender", valuesAdded[0])
        give_value_to_resultant(resultant, "Email", valuesAdded[4])
        give_value_to_resultant(resultant, "Age", valuesAdded[5])
        give_value_to_resultant(resultant, "City", valuesAdded[6])
        give_value_to_resultant(resultant, "Device", valuesAdded[7])
        give_value_to_resultant(resultant, "Order At", valuesAdded[9])
    end

    return resultant.to_s.gsub(", ", ",").gsub("=>", ":").gsub("'", '"')
end

# def display()
#     input_data = ["Gender,FirstName,LastName,UserName,Email,Age,City,Device,Coffee Quantity,Order At", "Male,Carl,Wilderman,carl,yahoo.com,21->40,Seattle,Safari iPhone,2,afternoon", "Male,Marvin,Lind,marvin,hotmail.com,66->99,Detroit,Chrome Android,2,afternoon", "Female,Shanelle,Marquardt,shanelle,hotmail.com,21->40,Las Vegas,Chrome,1,afternoon", "Female,Lavonne,Romaguera,lavonne,yahoo.com,66->99,Seattle,Chrome,2,morning", "Male,Derick,McLaughlin,derick,hotmail.com,41->65,Chicago,Chrome Android,1,afternoon"]
#     puts(my_data_process(input_data))
# end

# display()
