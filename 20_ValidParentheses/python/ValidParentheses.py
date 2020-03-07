class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 0:
            return True
        if len(s)<2:
            return False
        meta = []
        for item in s:
            if item == ')':
                if len(meta)>0 and meta[-1] == '(':
                    meta.pop()
                else:
                    return False
            elif item == ']':
                if len(meta)>0 and meta[-1] == '[':
                    meta.pop()
                else:
                    return False
            elif item == '}':
                if len(meta)>0 and meta[-1] == '{':
                    meta.pop()
                else:
                    return False
            else:
                meta.append(item)
        
        if len(meta) == 0:
            return True
        else:
            return False