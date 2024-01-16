# class RandomizedSet:
    

#     def __init__(self):
    
#         self.arr = []
#     def search(self, val: int):
#         for i in range(len(self.arr)):
#             if val == self.arr[i]:
#                 return True
#             return False

#     def insert(self, val: int) -> bool:
#         if self.search(val):
#             return False
        
#         self.arr.append(val)
#         return True
            
        
        
        

#     def remove(self, val: int) -> bool:
#         if not self.search(val):
#             return False
#         self.arr.remove(val)
#         return True
        

#     def getRandom(self) -> int:
        
#         ran = random.choice(self.arr)
#         return ran
        


# # Your RandomizedSet object will be instantiated and called as such:
# # obj = RandomizedSet()
# # param_1 = obj.insert(val)
# # param_2 = obj.remove(val)
# # param_3 = obj.getRandom()


import random

class RandomizedSet:
    def __init__(self):
        self.arr = []

    def search(self, val: int) -> bool:
        for i in range(len(self.arr)):
            if val == self.arr[i]:
                return True
        return False

    def insert(self, val: int) -> bool:
        if self.search(val):
            return False
        self.arr.append(val)
        return True

    def remove(self, val: int) -> bool:
        if not self.search(val):
            return False
        self.arr.remove(val)
        return True

    def getRandom(self) -> int:
        ran = random.choice(self.arr)
        return ran

# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
