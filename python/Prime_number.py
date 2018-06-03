def is_prime(x):
     i = x
     i -= 1

     if x == 1:
         print("This Number is prime")
         return

     if x == 0:
         print("This Number is default prime")
         return

     while i != 1:
              if x % i == 0:
                print("Number not prime")
                return
              else:
                i -= 1
     print("This Number is prime")






a = input("Enter the number from 0 to 1000:")
if (int (a) >= 0) and (int (a) <= 1000):
        is_prime(int(a))
else:
        print("Your number not belong from 0 to 1000")