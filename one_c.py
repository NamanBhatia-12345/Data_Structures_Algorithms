str1 = input()
li = list(str1.split(" "))
res = ""
for i in range(len(li)):
    if li[i] == "one" :
        res += '1'
    elif li[i] == "two" :
        res += '2'
    elif li[i] == "three" :
        res += '3'
    elif li[i] == "four" :
        res += '4'
    elif li[i] == "five" : 
        res += '5'
    elif li[i] == "six" : 
        res += '6'
    elif li[i] == "seven" : 
        res += '7'
    elif li[i] == "eight" : 
        res += '8'
    elif li[i] == "nine" : 
        res += '9'
    elif li[i] == "zero" : 
        res += '0'
    elif  li[i] == "double" :
        if li[i+1] == "one" :
            res += "11"
        elif li[i+1] == "two" :
            res += "22"
        elif li[i+1] == "three" :
            res += "33"
        elif li[i+1] == "four" :
            res += "44"
        elif li[i+1] == "five" :
            res += "55"
        elif li[i+1] == "six" :
            res += "66"
        elif li[i+1] == "seven" :
            res += "77"
        elif li[i+1] == "eight" :
            res += "88"
        elif li[i+1] == "nine" :
            res += "99"
        elif li[i+1] == "zero" :
            res += "00"
        i += 1
    else:
        if li[i+1] == "one" :
            res += "111"
        elif li[i+1] == "two" :  
            res += "222"
        elif li[i+1] == "three" :
            res += "333"
        elif li[i+1] ==  "four" :
            res += "444"
        elif li[i+1] == "five" :
            res += "555"
        elif li[i+1] == "six" :
            res += "666"
        elif li[i+1] == "seven" :
            res += "777"
        elif li[i+1] == "eight" :
            res += "888"
        elif li[i+1] == "nine" :
            res += "999"
        elif li[i+1] == "zero" :
            res += "000"
        i += 1
print(res)
