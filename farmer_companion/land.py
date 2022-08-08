#!/usr/bin/python3
length_mtrs = input("Enter length in meters: ")
width_mtrs = input("Enter width in meters: ")
length_mtrs = int(length_mtrs)
width_mtrs = int(width_mtrs)
square_mtrs = (length_mtrs * width_mtrs)
one_acre = 4046.856422
acres = square_mtrs / one_acre
remaining_mtrs = square_mtrs % one_acre
whole_acres = int(acres)

print(square_mtrs, " square meters is ", format(acres, ".2f"), " acres ")
print(square_mtrs, "square meters is", whole_acres, "whole acres(s) with", format(remaining_mtrs, ".2f"), " square meters remaining")
