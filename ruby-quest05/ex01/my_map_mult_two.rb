def my_map_mult_two(arr)
    new_arr = []
    arr.each do |arr|
        new_arr.push(arr * 2)
    end
    return new_arr
end