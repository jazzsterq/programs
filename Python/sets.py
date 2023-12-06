#sets don't care about order and remove duplicates
grade={ 'A',2,'B','B'}
grade2={'A','B','C'}
print(grade)
print(grade.intersection(grade2))
print(grade.difference(grade2))
print(grade.union(grade2))

empty_set=set() #as empt_set={} creates a dictionary 
