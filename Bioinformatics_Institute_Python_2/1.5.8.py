class MoneyBox:
    def __init__(self, capacity):
        self.capacity = capacity
        self.now = 0
        
    def can_add(self, v):
        if self.now + v <= self.capacity:
            return True
        else:
            return False
        
    def add(self, v):
        self.now += v
