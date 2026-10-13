def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 40
    elif item=="palav":
        return 50
    elif item=="tea":
        return 20
    elif item=="coffee":
        return 15
    else:
        return 0


def item_cost(item, qty):
     amount=get_price(item)
     return amount*qty


def calculate_gst(amount, rate=0.05):
    gst=amount*rate
    return  gst
    # TODO: return the GST rounded to 2 decimals


def generate_bill(subtotal, discount_percent=0):
    discount=subtotal * discount_percent
    amount_after_discount = subtotal-discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount,gst,total


def split_bill(total, people):
    each_pays = total/people
    left_over = total%people
    return each_pays,left_over


# --------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal1 = item_cost("dosa",2)# TODO: call item_cost() for dosa and coffee and add them
discount1, gst1, total1 =generate_bill(subtotal1,discount_percent= 0.10) # TODO: call generate_bill() using a KEYWORD argument
subtotal2=item_cost("coffee",3)
discount2, gst2, total2=generate_bill(subtotal2,discount_percent=0.10)
each, extra =split_bill(total1+total2,3) # TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal1 :", subtotal1)
print("Discount1 :", discount1)
print("GST1      :", gst1)
print("Total1    :", total1)
print("Subtotal2 :", subtotal2)
print("Discount2 :", discount2)
print("GST2      :", gst2)
print("Total2    :", total2)
print("Each pays:",round(each,2))
print("left_over:",round(extra,2))