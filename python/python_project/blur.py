from PIL import Image, ImageFilter
#This code blurs an image
before=Image.open("image filename.extension")
after=before.filter(ImageFIlter.BoxBlur(10))
after.save("new image filename.extension")
