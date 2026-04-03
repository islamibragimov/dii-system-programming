from math import sqrt

class Point:
    def __init__(self, x, y):
        self.x=x
        self.y=y

    def dump(self):
        print('Object point@ %x x=%f y=%f' % (id(self),self.x,self.y))


    def origin(self):
        return(sqrt(self.x*self.x + self.y*self.y))
    

pt = Point(3,4)
print(pt.origin())
pt.dump()