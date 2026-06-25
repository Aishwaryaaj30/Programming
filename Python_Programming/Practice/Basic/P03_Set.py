#set
#syntax{}
#hetero
#unordered
#unindexed
#duplicate not allowed
#set is mutable
#data is immutable


data = {10,90.67,"hello",True,10}
print("Datatype is: ", type(data))
print("lenght is: ", len(data))
print(data)
data.add(71)
print(data)
data.remove(10)
print(data)

print("data using loop:")
for value in data:
    print(value)