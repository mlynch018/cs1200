def gcd(num1, num2):
    if(num1>num2):
        big=num1
        small=num2
    else:
        big=num2
        small=num1
    if (small == 0):
        print("gcd(",big,",",small,")")
        return num1
    else: 
        print("gcd(",big,",",small,")")
        return gcd(small,(big%small))
    
        
x=1570
y=488
print("The GCD of",x,"and",y,"is",gcd(x,y))
