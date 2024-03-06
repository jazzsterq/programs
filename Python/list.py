courses=['EE203','CS205M','EE210']
print(courses)
print(len(courses))
print(courses[-1])# last item
courses.append('EE220')#to add this value at the end of 
courses.insert(1,'EE204')
print(courses)

coursesCS=['DataStruct','DigitalDesign',4]
courses.extend(coursesCS)
print(courses)
popped = courses.pop()
courses.sort()#for ascending
courses.sort(reverse=True)#for descending
courses_sorted = sorted(courses) #to store in new and not change the old
print(courses.index('EE203'))
print('CS205M' in courses) # to check whether it's in the list , it's a boolean
for items in courses :
    print(items)
for index,items in enumerate(courses) :
    print (index,items)
    # Output :
    # 2 EE220
    # 3 EE210
    # 4 EE204
    # 5 EE203
    # 6 DigitalDesign
    # 7 DataStruct
    # 8 CS205M
course_str=', .'.join(courses)
print(course_str)
newlist=course_str.split(', .')
print(newlist)

empty_list=[]#or list()
courses2=[]
courses2.append(('a','b'))
print(courses2[0][1])