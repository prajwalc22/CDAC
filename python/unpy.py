import numpy as np
a=np.arange(10)
# print(a)
# # b=a.shape
# print(f"Shape: {a.shape}")
# print(f"Dimensions: {a.ndim}")
# print(f"Data Type: {a.dtype}")
b=a*2
# print(b)


mat=a.reshape(2,5)
print(mat)
print(f"Shape: {mat.shape}")
print(f"Dimensions: {mat.ndim}")
print(f"Data Type: {mat.dtype}")
 