days = int(input())
solution = {}
for x in range(days):
    candles = input().split()
    increment = int(candles[0])
    name = int(candles[1])
    total = (name * (name + 1) // 2)+name
    solution[increment] = total
for key, value in solution.items():
    print(key, value)