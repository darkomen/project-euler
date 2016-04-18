#!/usr/bin/python
# -*- coding: utf-8 -*-
# Exercise number 01 from https://projecteuler.net/archives
# If we list all the natural numbers below 10 that are multiples of 3 or 5,
# we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.
# Find all multiples of 3 or 5 bellow 1000

__author__ = 'SLP'

class multiples():
    def __init__(self,start,end,numberone, numbertwo):
        """
        Init method
        :param self: object
        :param start: First number of the range to calculate
        :param end:  Last number of the range to calculate
        :param numberone: Number one to calculate the multiples
        :param numbertwo: Number tw to calculate the multiples
        :return:
        """
        self.__start = start
        self.__end = end
        self.__numberone = numberone
        self.__numbertwo = numbertwo
        self.__multiples = []
        self.__suma = 0

    def calculateMultiples(self):
        self.__multiples = [number for number in range(self.__start, self.__end) if not (number % self.__numberone) or not (number % self.__numbertwo)]

    def sumMultiples(self):
        self.__suma = sum(self.__multiples)

    def getSuma(self):
        return self.__suma

    def getMultiples(self):
        return self.__multiples

    def main(self):
        self.calculateMultiples()
        self.sumMultiples()
        print(self.getMultiples())
        print(self.getSuma())

if __name__ == '__main__':
    exercise1 = multiples(0,1000,3,5)
    exercise1.main()
