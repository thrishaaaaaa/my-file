def calculate_gst(room_price):
    return 0.18 * room_price


booking_info = {}

def booking_details():
    for i in range(1, 6):
        print(f"\nEnter details of customer {i}")

        room_no = int(input("Enter the room number: "))
        customer_name = input("Enter the customer name: ")
        contact_no = input("Enter the contact number: ")
        booking_amount = float(input("Enter the booking amount: "))
        date = input("Enter the date [yyyy-mm-dd]: ")

        gst = calculate_gst(booking_amount)

        booking_info[i] = {
            "number": room_no,
            "name": customer_name,
            "contact": contact_no,
            "amount": booking_amount,
            "date": date,
            "gst": gst
        }


def get_total_room_price():
    total = 0
    for i in range(1, 6):
        total += booking_info[i]["amount"]
    return total


def display_booking():
    print("\n----- HOTEL BOOKING DETAILS -----")

    for i in range(1, 6):
        print(f"\nCustomer {i}")
        print("Room Number:", booking_info[i]["number"])
        print("Customer Name:", booking_info[i]["name"])
        print("Contact Number:", booking_info[i]["contact"])
        print("Booking Amount:", booking_info[i]["amount"])
        print("Date:", booking_info[i]["date"])
        print("GST:", booking_info[i]["gst"])


def get_total_gst():
    total_gst = 0
    for i in range(1, 6):
        total_gst += booking_info[i]["gst"]
    return total_gst


# Main program
booking_details()

display_booking()

print("\nTotal Room Price:", get_total_room_price())
print("Total GST:", get_total_gst())
print("Grand Total:", get_total_room_price() + get_total_gst())