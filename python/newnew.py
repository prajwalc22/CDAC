import pandas as pd
data =[
    ['Alice',25,'NY'],
     ['Charlie',30,'Paris'],
      ['Bob',35,'London']
]


#pd.DataFrame
df = pd.DataFrame(data,columns=['Name','Age','City'])


print(df)


#select a column
print(df['Name'])
#select a row by index
print(df.loc[0])

#select multiple columns
print(df['Name','City'])
