people = ['Bob', 'John', 'Smith']

def distinct(L): # predicate? What does it do?
   if len(L) < 2:
       return True
   else:
       j = L.pop() # pops last element
       if j in L:
           return False
       return distinct(L)

def knowEachOther(p1, p2):
    if (p1 == painter) and (p2 == plumber):
        return False
    if (p2 == 'Smith') and (p1 == 'Bob'):
        return False
    if (p1 == 'Smith') and (p1 == carpenter):
        return False
    return True

def earnsMore(p3,p4):
    global carpenter, painter, plumber
    if (p3 == p4):
        return False
    if (p3 == painter)  and (p4 == plumber):
        return False
    if (p3 == 'John'):
        return False
    return True
    
def solve2():
   global carpenter, painter, plumber
   for carpenter in people:
       for painter in people:
           for plumber in people:
               if distinct([carpenter, painter, plumber]):
                   sol = knowEachOther(painter,carpenter)
                   sol = sol and knowEachOther(carpenter,plumber)
                   sol = sol and earnsMore(plumber, painter)
                   sol = sol and earnsMore ('Bob', 'John')
                   sol = sol and knowEachOther('Smith', 'Bob')
                   if sol:
                       print("Carpenter =",carpenter," Painter =",painter," Plumber =",plumber)
solve2()
