import time
from tkinter import *
root=Tk()
clock = Label(root, font=('times', 20, 'bold'), bg='green', fg='yellow')
clock.pack(fill=BOTH, expand=1)
def tick():
    zeit = time.strftime('%H:%M:%S')
    clock.config(text=zeit)
    clock.after(1000, tick)
tick()
app=Application(master=root)
app.mainloop()
