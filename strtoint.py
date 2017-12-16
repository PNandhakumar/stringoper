try:
	f=open('D:/read.txt','r')
	n=f.read()
	d=int(n)
	f.close()
	f=open('D:/read.txt','w')
	f.write(d)
except:
	print('cannot convert to integer')
