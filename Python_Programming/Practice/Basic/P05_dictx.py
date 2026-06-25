data = {"name" : "Let us C", "author" : "Y Kanetkar", "price" : 340, "publication" : "BPP Publication"}

print("loop to display keys")
for value in data:
    print(value)

print("\nloop to display values")
for value in data.values():
    print(value)

print("\nloop to display key and value")
for k,v in data.items():
    print(k,v)