#Stop the lopp even when the condition still holds true(Premature exit)
count = 0
while count < 10:
    count += 1
    if count == 4:
        continue
    print(count)
    count += 1