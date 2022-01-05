#!/usr/bin/python3
"""Minimum Operations"""

def minOperations(n):
    if n <= 0:
        return 0
    for i in range(n):
        i * n
    return n
