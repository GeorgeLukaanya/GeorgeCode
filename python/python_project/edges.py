from PIL import Image, ImageFilter
#This code edges an image
before=Image.open("image filename.extension")
after=before.filter(ImageFIlter.FIND_EDGES)
after.save("new image filename.extension")
