#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""
print("PROFILE CARD");
print("--------------------------");
name,email,phone,=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
name=name.title().strip().replace( "  "," ")
email=email.lower()
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
domain=email[13:]
phone=phone.replace("+91-","").replace("-", "")
mask_phone="*"*9+phone[-4:]
valid=phone.isdigit()and len(phone)== 10
print("name:",name)
print("initials:",initials)
print("email:",email)
print("domain:",domain)
print("phone:",mask_phone)
print("valid:",valid)