from tkinter import *

def action():
    lbl1.config(text = "Hallo Welt")

master=Tk()
Button(master,text='OK',width=20,command=action).grid(row=0, column=0)
lbl1=Label(master, fg="blue")
lbl1.grid(row=1, column=0)
master.mainloop()
