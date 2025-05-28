#Stop the lopp even when the condition still holds true(Premature exit)
count = 1
while count <= 5:
    if count == 4:
        break
    print(count)
    count += 1