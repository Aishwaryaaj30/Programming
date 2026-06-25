#dict
#syntax {key : value}
#hetero
#ordered
#indexed(not numeric)
##key duplicate allowed but old gets overwritten or replaced
#value duplicate allowed
#data mutable(value)


data = {"name" : "Let us C", "author" : "Y Kanetkar", "price" : 340, "publication" : "BPP Publication"}

print("datatype: ", type(data))
print("lenght is: ", len(data))
print(data)

print(data["name"])

data["price"] = 400
print(data)
