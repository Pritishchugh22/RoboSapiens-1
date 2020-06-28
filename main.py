from decode import decode
from webscraping import getInfo
from detector import detector
import cv2
import sys


def main():
    img_file = sys.argv[1]
    img = cv2.imread(img_file)
    list_of_boxes = detector(img_file)  ##using opencv to detect barcode
    result = open("result.txt", 'w')  ##writing barcode to file

    for box in list_of_boxes:
        target_img = img[box[0]:box[1]][box[2]:box[3]] #dimensions of barcode
        barcode = decode(target_img) 	#decode barcode to utf-8
        data = getInfo(barcode)			#using UPC database for pincode
        result.write(str(data) + '\n')   # writing pincode to file


if __name__ == "__main__":
    main()
