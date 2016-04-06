#!/usr/bin/python
# -*- coding: utf-8 -*-
# Exercise number 01 from https://projecteuler.net/archives
# If we list all the natural numbers below 10 that are multiples of 3 or 5,
# we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.
# Find all multiples of 3 or 5 bellow 1000
multiples = [number for number in range(0, 1000) if not (number % 3) or not (number % 5)]
print(sum(multiples))
