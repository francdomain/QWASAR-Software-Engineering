def my_csv_parser(str, sep)
    # Split the string into an array of lines
    lines = str.split("\n")
    
    # Split the first line into an array of headers
    headLine = lines[0].split(sep)
    
    # Initialize the output array with the headers as the first row
    outer = [headLine]
    
    # Iterate over the remaining lines and split them into arrays
    for i in 1...lines.length
      row = lines[i].split(sep)
      outer << row
    end
    
    return outer
end

