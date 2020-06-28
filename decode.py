from pyzbar import pyzbar
## converting to utf-8
def decode(img):
    barcodes = pyzbar.decode(img)

    for barcode in barcodes:
        data = barcode.data.decode("utf-8")
        barcodeType = barcode.type

    return data