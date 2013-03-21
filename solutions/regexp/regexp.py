#!env python
#
# Example how to use regular expresstions in Python
# Author: Thorsten Moellers
# 

import re


pattern = re.compile(".*error:\s*(\d+).*", re.IGNORECASE)

for l in file("output.log"):
    l=l.rstrip()
    matcher = pattern.match(l)
    if matcher:
        print("Error: " + matcher.group(1))
