#!/usr/bin/python3
"""Minimum Operations"""
import sys


def minOperations(n):
    res = 0
    i = 2

    while i <= n:
        while n % i == 0:
            res += i
            n = n / i
        i += 1
    return res
