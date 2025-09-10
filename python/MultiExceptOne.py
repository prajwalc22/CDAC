try:
    value = int("abc")
    result = 10 / value
except (ValueError, ZeroDivisionError) as e:
    print(f"An error occured: {e}")    