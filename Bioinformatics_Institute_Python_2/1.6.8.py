class ExtendedStack(list):
    def sum(self):
        x = self.pop()
        y = self.pop()
        self.append(x + y)
        
    def sub(self):
        x = self.pop()
        y = self.pop()
        self.append(x - y)
        
    def mul(self):
        x = self.pop()
        y = self.pop()
        self.append(x * y)
        
    def div(self):
        x = self.pop()
        y = self.pop()
        self.append(x // y)
