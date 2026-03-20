import os
import platform
import socket

print("Operating System:", platform.system())
print("OS Version:", platform.version())
print("Hostname:", socket.gethostname())
print("Current Working Directory:", os.getcwd())