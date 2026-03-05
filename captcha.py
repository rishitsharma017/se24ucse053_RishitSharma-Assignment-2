import random
import string

print("=== Simple CAPTCHA Verification ===")

# generate random captcha
captcha = ''.join(random.choices(string.ascii_letters + string.digits, k=5))

print("CAPTCHA:", captcha)

user_input = input("Enter the CAPTCHA: ")

if user_input == captcha:
    print("Verification Successful. You are human.")
else:
    print("Verification Failed. Try again.")