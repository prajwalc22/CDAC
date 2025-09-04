import pandas as pd
data ={
    'Name': ['Alice','Bob','Charlie','David'],
    'Department':['HR','Engineering','Engineering','HR'],
    'Salary': [50000, 80000, 75000, 52000]
}

df=pd.DataFrame(data)

grouped =df.groupby('Department')['Salary'].mean()
print(grouped)