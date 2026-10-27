person = ("Hans","Dampf")
print(person[0])
person2 = {"vname":"Hans","nname":"Dampf"}
print(type(person2))
print(person2)
print(person2["vname"])
for v in person2.values():
    print(v)
daten = {1:0,2:True}
logisch={True:False,False:True}
print(logisch[True])
auchnochlogisch={(1,2):True,(1,2,3):False}
print(auchnochlogisch[(1,2,3)])


