#!/usr/bin/env ruby

def max_speed_cars_quantity(cars)
    qty = 1
    cars.each_with_index do |car, i|
        next if i == 0
        qty += 1 if car < cars[i-1]
    end
    qty
end

test_cases = gets.to_i
i = 0
cars_qty = Array.new
cars_speed = Array.new
max_speed = Array.new
begin
    i += 1
    cars_qty.push gets.chomp
    cars_speed.push gets.chomp
end until i == test_cases

for cars in cars_speed
    max_speed.push max_speed_cars_quantity cars.split
end
puts max_speed
