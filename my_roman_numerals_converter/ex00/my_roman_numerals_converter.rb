def numDigitToNumeral(numDigit, index)
    romStr = ""
    romNumerals = ["I", "V", "X", "L", "C", "D", "M"]
  
    if (1..3).include?(numDigit.to_i)
      i = 0
      while i < numDigit.to_i
        romStr.concat("#{romNumerals[index]}")
        i += 1
      end
    elsif numDigit.to_i == 4
      romStr.concat("#{romNumerals[index]}#{romNumerals[index + 1]}")
    elsif numDigit.to_i == 5
      romStr.concat("#{romNumerals[index + 1]}")
    elsif (6..8).include?(numDigit.to_i)
      romStr.concat("#{romNumerals[index + 1]}")
      i = 0
      while i < (numDigit.to_i) - 5
        romStr.concat("#{romNumerals[index]}")
        i += 1
      end
    elsif numDigit.to_i == 9
      romStr.concat("#{romNumerals[index]}#{romNumerals[index + 2]}")
    end
  
    return romStr
end
  
def thousandsHandler(numDigit)
    s = ""
    i = 0
    while i < numDigit.to_i
      s.concat("M")
      i += 1
    end
    return s
end
  
def my_roman_numerals_converter(num)
    revStrNum = "#{num}".reverse
    revRomNumerals = []
  
    revStrNum.each_char.with_index do |numDigit, index|
    case index
    when 0
        j = 0
    when 1
        j = 2
    when 2
        j = 4
    end
    if index != 3
        revRomNumerals.<<(numDigitToNumeral(numDigit, j))
    else
        revRomNumerals.<<(thousandsHandler(numDigit))
    end
    end 
    return revRomNumerals.reverse.join('')
end
  
# puts my_roman_numerals_converter(14)
# puts my_roman_numerals_converter(79)
# puts my_roman_numerals_converter(845)
# puts my_roman_numerals_converter(2022)
  