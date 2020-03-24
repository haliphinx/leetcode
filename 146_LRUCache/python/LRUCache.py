class LRUCache:
    
    def __init__(self, capacity: int):
        self.__capacity = capacity
        self.__cache = collections.OrderedDict()

    def get(self, key: int) -> int:
        ans = -1
        if key in self.__cache:
            ans = self.__cache[key]
            del self.__cache[key]
            self.__cache[key] = ans
        return ans

    def put(self, key: int, value: int) -> None:
        if key in self.__cache:
            del self.__cache[key]
        if len(self.__cache) >= self.__capacity:
            print(self.__cache.popitem(last=False))
        
        self.__cache[key] = value


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)