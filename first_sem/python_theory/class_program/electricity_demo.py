
category=input("enter the category:")
units=int(input("enter the units:"))
threshold=input("enter the threshold[1/0]:")
duedate=int(input("enter the duedate[1/0]:"))



if category=="commercial":
    if (units<=100):
        bill=units*10
    elif (units>100 and units<=300):
        bill=units*12
    elif (units>300):
        bill=units*15
        print("bill:",bill)
    if threshold=="1" and category=="commercial":
        penalty_bill=bill+100
        print("penalty_bill:",penalty_bill)
    else:
        penalty_bill=bill
        print("penalty_bill:",penalty_bill)
    if duedate==1:
        print("discount is available..")
    else:
        print("discount is not available..")

else:
    if category=="non commercial":
        base=100
        amount=units-base
        if units>100:
            bill=units*5
        elif units>100 and units<300:
            amount=(units-base)
            bill=(units*6)+(base*100)
        elif units>300:
            amount
            bill=units*8
        print("bill:",bill)
        
        if threshold=="1"and category=="non commercial":
            penalty_bill= bill+50
            print("penalty_bill:",penalty_bill)
        else:
            penalty_bill=bill
            print("penalty_bill:",penalty_bill)
        if duedate==1:
            print("discount is available..")
        else:
            print("discount is not available..")
    