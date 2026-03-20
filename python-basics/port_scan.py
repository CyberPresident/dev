import socket

target = "scanme.nmap.org"
start = int(input("Start port: "))
end = int(input("End port: "))

print(f"\nScanning {target}...\n")

for port in range(start, end + 1):
    s = socket.socket()
    s.settimeout(1)

    try:
        s.connect((target, port))
        print(f"[+] Port {port} is OPEN")

        # Only try HTTP banner grab on port 80
        if port == 80:
            s.send(b"HEAD / HTTP/1.1\r\nHost: scanme.nmap.org\r\n\r\n")
            response = s.recv(1024)
            print("----- HTTP Response -----")
            print(response.decode(errors="ignore"))

    except:
        print(f"[-] Port {port} is CLOSED")

    finally:
        s.close()