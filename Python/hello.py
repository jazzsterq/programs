print("Hello world")
print('Hello world')
print("""Hello
world""")
message = "Hello world Hello"
print(len(message))
print(message[0:5]) # it is upto 4th index 
print(message[6:])
print(message.lower())
print(message.upper())
print(message.count('Hello'))
firstocc=message.find('Hello')
print(firstocc)
print(message.find('Hello',firstocc+1))
message=message.replace('Hello','No')
print(message)
ma='varsha'
pa='ashok'
welcome='{} and {} are welcomed'.format(ma,pa)
print(welcome)
welcome2=f'{ma} and {pa[:3]}'
print(welcome2)
print(dir(pa))
print(help(str))