#!env python
#
# Example how to use regular expresstions in Python
# Author: Thorsten Moellers
# 

import re,os

def testRegexp(regexp, text):
    print("Matching '" + text + "' against '" + regexp + "'")
    pattern=re.compile(regexp, re.IGNORECASE)
    matcher=pattern.match(text)
    if matcher:
        print("matcher.group():" + matcher.group())
        i = 0
        l = len(matcher.groups())
        while(i <= l):
            print("matcher.group(" + str(i) + "):" + matcher.group(i))
            i = i + 1
    else:
        print("matcher is None / no match")
    
          
def simpleExample():
    print "simple example:"
    p1 = re.compile('l(lo)')
    p2 = re.compile('(.*)l(lo)')
    m = p

def otherExample():
    pattern = re.compile(regexp ,re.IGNORECASE)
    print("Inputtext: " + inputtext)
    print("Regexp: " + regexp)
    matcher = pattern.match(inputtext)
    print("Group:" + matcher.group())
    print("Group 1:" + matcher.group(1))
    print("Group 2:" + matcher.group(2))


testRegexp('l(lo)',"Hello")
testRegexp('(.*)l(lo)',"Hello")
testRegexp('(.*)ll',"Hello")
testRegexp("(.*project"+os.sep+")[^"+os.sep+"]+("+os.sep+".*)","whatever"+os.sep+"project"+os.sep+"test-area"+os.sep+"foo")
