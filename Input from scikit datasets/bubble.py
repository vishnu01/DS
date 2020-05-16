from sklearn import datasets
iris=datasets.load_iris()
"""data for sorting"""
lst=iris.data.reshape(4,150)[0]
i=0;
while(i<len(lst)):
    j=i+1
    while(j<len(lst)):
        if(lst[i]>lst[j]):
            lst[i],lst[j]=lst[j],lst[i]
        j+=1
    i+=1
print(lst)

