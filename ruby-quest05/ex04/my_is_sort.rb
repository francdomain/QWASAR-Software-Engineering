def my_is_sort(arr)
    return true if arr.length < 2 # An array with 0 or 1 elements is always sorted

    if arr[0] <= arr[-1] # Check if sorted in ascending order
        (1...arr.length).each do |i|
            return false if arr[i] < arr[i-1]
    end
    else # Check if sorted in descending order
        (1...arr.length).each do |i|
            return false if arr[i] > arr[i-1]
    end
    end
    true 
end

