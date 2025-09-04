list = []
tuple = ()

def addlist():
    l = int(input("Enter the list members"))
    list.append(l)
    return list

def displayList():
    print("list is " ,list)
    return list

def searchlist():
    i = int(input("Enter the memeber to be searched"))
    if i in list:
        print('It Exists')
    else :
        print('Does not Exists')

def searchTuple():
    i = int(input("Enter the memeber to be searched"))
    if i in tuple:
        print("It Exists")
    else:
        print("Does Not Exists")

def tupleDisplay():
    print("Tuple is ",tuple)
    return tuple

print ("Menu Display ")

while True:
    print("\n Main Menu")
    print("1. Add List ")
    print("2. Add Tuple ")
    print("3. Search List ")
    print("4. Search Tuple ")
    print("5. Exit")
    choice=int(input("Enter a choice."))

    if choice ==1:
        l=[]
        l=addlist()
        print("List is: ", l)
    elif choice ==2:
        d=int(input("Enter the tuple numbers: "))
        tuple=tuple+(d,)
        tupleDisplay()
    elif choice==3:
        displayList()
        searchlist()
    elif choice==4:
        searchTuple(tuple)
    elif choice ==5:
        break           
    else:
        print("Incorrect choice.")
    
