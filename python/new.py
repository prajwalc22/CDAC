import pandas as pd
df = pd.DataFrame({
    'Name':['Alice','Bob','Charlie','David'],
    'Age':[25,30,35,40],
    'City':['NY','Paris','Ny','Paris']
})

df['Bonus']=0
df.loc[(df['Age']>30)&(df['City']=='Paris'),'Bonus']=1000

print(df)