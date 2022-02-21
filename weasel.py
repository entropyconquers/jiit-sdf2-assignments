#scan for files in every directory and subdirectory of the current directory

import os
from fnmatch import fnmatch

root = '/Users/vishesh/sdf2/'
pattern = "*.cpp"
file_list = []
for path, subdirs, files in os.walk(root):
    for name in files:
        if fnmatch(name, pattern):
            file_list.append(os.path.join(path, name))

comment = '''/*
This is an assignment from the repo jiit-sdf2-lab-assignments on github
You can access it here: https://github.com/entropyconquers/jiit-sdf2-lab-assignments
Copyright 2022 Vishesh Raheja
*/'''

for i in file_list:
    file = open(i, 'r')
    text = file.read()
    file.close()
    if comment not in text:
        comment + '\n' + text
        file = open(i, 'w')
        file.write(text)
        file.close()
        
    file = open(i, 'r')
    
    data = file.readlines()
    file.close()
    for j in range(len(data)):
        if data[j].startswith('//'):
            if 'Vishesh Raheja' not in data[j]:
                data[j] = "{} ~Vishesh Raheja\n".format(data[j].strip())
    file = open(i, 'w')
    file.writelines(data)
    file.close()
