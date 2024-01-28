sum =0 
def check(ans_string,num):
    num_check = []
    i = 0
    while(i<len(ans_string)):
        count=0
        while(i< len(ans_string) and ans_string[i]=='#'):
            count+=1
            i+=1
        if(count>0):
            num_check.append(count)
        i+=1
        if(i>=len(ans_string)):
            break
        
    if(len(num_check)==len(num)):
        for j in range(len(num)):
            if(num[j]!=num_check[j]):
                return 0
    else:
        return 0
    return 1

def recursion(pattern,num,index,ans_string):
    global sum
    if(len(ans_string)==len(pattern)):
        if(check(ans_string,num)):
            sum+=1
            return
        return
    if(pattern[index]!='?'):
        ans_string +=(pattern[index])
        recursion(pattern,num,index+1,ans_string)
    else:
       ans_string+='#'
       recursion(pattern,num,index+1,ans_string)
       ans_string = ans_string[:-1]
       ans_string+='.'
       recursion(pattern,num,index+1,ans_string)
while(1):
    str =  input()
    if(str=="-1"):
        break
    
    val =  str.split(" ")
    pattern = val[0].strip()
    num =  (val[1].strip())
    # num+=","+num+","+num+","+num+","+num
    # pattern+="?"+pattern+"?"+pattern+"?"+pattern+"?"+pattern
    num = num.split(',')
    for i in range(len(num)):
        num[i]  =int(num[i])
    # print(pattern," ",num)
    ans_string= ''
    # print(pattern," ",num)
    recursion(pattern,num,0,ans_string)
print(sum)