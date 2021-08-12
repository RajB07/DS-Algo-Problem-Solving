import threading as th
from time import sleep
def even():
    for i in range(0,10,2):
            print(i)
            sleep(2)

def odd():
    for i in range(1,10,2):
            print(i)
            sleep(2)

if __name__ == "__main__":

    thread1 = th.Thread(target=even)
    thread2 = th.Thread(target=odd)

    thread1.start()
    thread2.start()
    
    thread1.join()
    thread2.join()