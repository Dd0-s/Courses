class Buffer:
    def __init__(self):
        self.data = []
        
    def add(self, *a):
        self.data += a
        while len(self.data) >= 5:
            print(sum(self.data[:5]))
            self.data = self.data[5:]
        
    def get_current_part(self):
        return self.data
