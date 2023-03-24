require 'date'
require 'time'

def transformAge(age)
    if age < 21
        return "1->20"
    elsif age < 41
        return "21->40"
    elsif age < 66
        return "41->65"
    else
        return "66->99"
    end
end

def transformEmail(email)
    return email.split("@")[1]
end

def transformTime(time)
    datetimeObj = DateTime.parse(time, '%Y-%m-%d %H:%M:%S')

    if datetimeObj.hour < 12
        return "morning"
    elsif datetimeObj.hour < 18
        return "afternoon"
    else
        return "evening"
    end
end

def my_data_transform(csv_content)
    resultant = []
    numLine = 0

    for line in csv_content.split("\n")
        transValues = line.split(",")
        if transValues.length > 1 && numLine > 0
            transValues[4] = transformEmail(transValues[4])
            transValues[5] = transformAge((transValues[5]).to_i)
            transValues[9] = transformTime(transValues[9])
        end
            
        numLine += 1 
        if transValues.length > 1
            resultant << "#{transValues.join(",")}"
        end
    end
    
    
    # Join the transformed rows back together into a CSV and return it
    return resultant
end


# def display()
#     my_data_transform()
# end

# display()

