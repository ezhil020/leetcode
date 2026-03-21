class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        result = [0] * n
        stack = []
        for log in logs:
            function_id, event_type, timestamp = log.split(":")
            function_id, timestamp = int(function_id), int(timestamp)
            if event_type == "start":
                if len(stack) > 0 :
                    result[stack[-1]] += (timestamp - prev_time ) 
                    stack.append(function_id)
                    prev_time = timestamp
                else:
                    stack.append(function_id)
                    prev_time = timestamp
            else:
                result[stack.pop()] += (timestamp - prev_time ) + 1
                prev_time = timestamp + 1

        return result
                                    
                            





        