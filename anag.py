def ana():
	s1=input()
	if s1=='\n':
		return 'None'
	s2=input()
	if s2=='\n':
		return 'None'
	l1,l2=len(s1),len(s2)
	if l1!=l2:
		return 'None'
	d={}
	s1=s1.lower()
	s2=s2.lower()
	for i in range(l1):
		if s1[i] not in d:
			d[s1[i]]=1
		else :
			d[s1[i]]+=1
	for i in range(l2):
		if s2[i] in d:
			d[s2[i]]+=1

	print(d)
	for i in d:
		if d[i]%2==0:
			continue
		else :
			return 'Not anagram'
	return 'anagram'
ana()
