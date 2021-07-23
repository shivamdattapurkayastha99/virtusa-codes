def isPalindrome(s):
    return s==s[::-1]
s=input()
if isPalindrome(s):
    print("palindrome")
else:
    print("not palindrome")