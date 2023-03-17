
def getPhoneNumber(s):
    x = list(s.split(" "))
    res=""
    for i in range(len(x)):
        if(x[i]=="one"):
            res+="1"
        elif(x[i]=="two"):
            res+="2"
        elif(x[i]=="three"):
            res+="3"
        elif(x[i]=="four"):
            res+="4"
        elif(x[i]=="five"):
            res+="5"
        elif(x[i]=="six"):
            res+='6'
        elif(x[i]=="seven"):
            res+="7"
        elif(x[i]=="eight"):
            res+="8"
        elif(x[i]=="nine"):
            res+="9"
        elif(x[i]=="zero"):
            res+="0"
        else:
            if(x[i]=="double"):
                if(x[i+1]=='one'):
                    res+="11"
                elif(x[i+1]=='two'):
                    res+="22"
                elif(x[i+1]=='three'):
                    res+="33"
                elif(x[i+1]=='four'):
                    res+="44"
                elif(x[i+1]=='five'):
                    res+="55"
                elif(x[i+1]=='six'):
                    res+="66"
                elif(x[i+1]=='seven'):
                    res+="77"
                elif(x[i+1]=='eight'):
                    res+="88"
                elif(x[i+1]=='nine'):
                    res+="99"
                elif(x[i+1]=='zero'):
                    res+="00"
                i+=2
            else:
                if(x[i+1]=='one'):
                    res+="111"
                elif(x[i+1]=='two'):
                    res+="222"
                elif(x[i+1]=='three'):
                    res+="333"
                elif(x[i+1]=='four'):
                    res+="444"
                elif(x[i+1]=='five'):
                    res+="555"
                elif(x[i+1]=='six'):
                    res+="666"
                elif(x[i+1]=='seven'):
                    res+="777"
                elif(x[i+1]=='eight'):
                    res+="888"
                elif(x[i+1]=='nine'):
                    res+="999"
                elif(x[i+1]=='zero'):
                    res+="000"
                i+=2
         
        
    return(res)
    # Write your code here


s = input()

result = getPhoneNumber(s)

print(result)