import pandas as pd

#Creating an empty data-frame
df=pd.DataFrame(columns=['Name','Age','City'])

#adding rows
df.loc[0]=['John',25,'New York']
df.loc[1]=['Alice',30,'London']
df.loc[2]=['Bob',35,'Paris']

print(df)