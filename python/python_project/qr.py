import qrcode

img=qrcode.make("https://www.geeksforgeeks.org/inheritance-in-python/")
img.save("qr.png", "PNG")
