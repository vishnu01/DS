lst=input('Enter Numebrs: ')
lst=[int(i) for i in lst.split()]
i=0;
while(i<len(lst)):
    j=i+1
    while(j<len(lst)):
        if(lst[i]>lst[j]):
            lst[i],lst[j]=lst[j],lst[i]
        j+=1
    i+=1
print(lst)

