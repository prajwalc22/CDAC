class ValidationError(Exception):
    def __init__(self, field,msg):
        super().__init__(msg)
        self.field=field

try:
    raise ValidationError("email","Email format is Invalid.")
except ValidationError as e:
    print(f"Validation failed on field '{e.field}':{e}")        