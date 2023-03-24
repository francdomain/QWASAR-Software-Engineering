def my_string_index(haystack, needle)
    for i in 0 ...haystack.length
        if haystack[i] == needle
            return i
        end
    end
    return -1
end

# puts(my_string_index("hello", "l"))
# puts(my_string_index("aaaaa", "b"))