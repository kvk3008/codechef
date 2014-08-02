test=input()
count=0
while count < test:
  N=input()
  K=input()
  count1 = 0
  temp = 0
  while temp < N:
    even = input()
    if even % 2 == 0 :
       count1 = count1 + 1
    temp = temp + 1 
  if count1 == K :
     print "YES"
  else :
     print "NO"
  count = count + 1
