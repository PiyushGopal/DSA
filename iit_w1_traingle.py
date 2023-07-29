class Triangle:
    def _init_(self,a,b,c):
        self.a = a
        self.b = b
        self.c = c
        
    def Is_valid(self):
        if self.a == 0 or self.b == 0 or self.c ==0:
            return "Invalid"
        elif self.a + self.b>self.c and self.a + self.c > self.b and self.b + self.c > self.a:
            return "Valid"
        else:
            return "Invalid"
    def Side_Classification(self):
        if self.Is_valid()=="Invalid":
            return "Invalid"
        else:
            if self.a==self.b==self.c:
                return "Equilateral"
            elif self.a==self.b or self.b==self.c or self.a==self.c:
                return "Isosceles"
            else:
                return "Scaler"
    def Angle_Classification(self):
        if self.Is_valid()=="Invalid":
            return "Invalid"
        else:
            if self.a*2 + self.b2 > self.c*2:
                return "Acute"
            elif self.a*2 + self.b2 == self.c*2:
                return "Right"
            elif self.a*2 + self.b2 < self.c*2:
                return "Obtuse"
        
    def Area(self):
        if self.Is_valid()=="Invalid":
            return "Invalid"
        else: 
            s=(self.a+self.b+self.c)/2
            area = (s*(s-self.a)(s-self.b)(s-self.c))**0.5
        return area
       
a=int(input())
b=int(input())
c=int(input())
T=Triangle(a,b,c)
print(T.Is_valid())
print(T.Side_Classification())
print(T.Angle_Classification())
print(T.Area())
