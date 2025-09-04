import pandas as pd

df_csv = pd.read_csv('/home/acts/name.csv')
df=pd.DataFrame(df_csv)
print(df.head())