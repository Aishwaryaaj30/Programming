#tuple
#syntax()
#hetero
#indexed
#data immutable
#tuple immutable
#duplicate allowed

data = (10,"hello", 90.67,True,10)
print("datatype is: ", type(data))
print("lenght is: ", len(data))
print(data)

print(data[0])
print(data[1])

#data[0] = 11

print("data using loop:")
for value in data:
    print(data)

for i in range(len(data)):
    print(data[i])