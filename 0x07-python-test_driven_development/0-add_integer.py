#!/usr/bin/python3
def add_integer(m, n=98):
    if not isinstance(m, int) and not isinstance(m, float):
        raise TypeError("m must be an integer")
    if not isinstance(n, int) and not isinstance(n, float):
        raise TypeError("n must be an integer")
    if isinstance(m, float):
        m = int(m)
    if isinstance(n, float):
        n = int(n)
    return (m + n)
