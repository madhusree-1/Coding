class MyHashSet:
    def __init__(self):
        self.res = []

    def add(self, key: int) -> None:
        if(self.res.count(key) ==0):
            self.res.append(key)

    def remove(self, key: int) -> None:
        if(self.res.count(key)>0):
            self.res.remove(key)

    def contains(self, key: int) -> bool:
        if self.res.count(key) > 0:
            return True
        else:
            return False


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)