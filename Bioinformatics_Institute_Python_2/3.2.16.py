import re
import sys

pattern = r'(0|(1(01*0)*1))+'
for line in sys.stdin:
    line = line.rstrip()
    if re.fullmatch(pattern, line):
        print(line)
