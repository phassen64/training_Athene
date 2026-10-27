import time

i = 0
while(i < 10):
    localtime = time.asctime( time.localtime(time.time()) )
    print( "Aktuelle Zeit:", localtime)
    i += 1
    time.sleep(1)
