from datetime import datetime


log_message = input("Enter a log message: ")


with open('log.txt', 'a') as log_file:
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    log_file.write(f"[{timestamp}] {log_message}\n")

print("Log message appended to log.txt")
