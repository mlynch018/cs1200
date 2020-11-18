def reflexive(e,r):
    for x in e: 
        if (x,x) not in r: 
            return False
    return True
        
def symmetric(r):
    for (x,y) in r:
        if (y,x) not in r: 
            return False
    return True

def transitive(r):
    for (x,y) in r:
        for (a,z) in r: 
            if (y == a) and ((x,z) not in r):
                return False
    return True
    
domain = range(6) 
cords = ((0,0),(0,4),(0,5),(1,1),(1,3),(2,2),(3,1),(3,3),(4,0),(5,0),(4,4),(5,5))
print("R: ", cords)
print("Reflexive: ", reflexive(domain, cords))
print("Symmetric: ", symmetric(cords))
print("Transitive: ", transitive(cords))
