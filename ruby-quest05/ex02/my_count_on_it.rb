def my_count_on_it(s)
    lenEachStr = []
    s.each do |s|
        lenEachStr.push(s.length)
    end
    return lenEachStr
end