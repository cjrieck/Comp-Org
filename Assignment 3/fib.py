def fast_fib(n, p1, p2, summation):

	print p2
	summation += p2 # increment summation 

	if n == 1: # if down to the last term
		return p2, summation # return nth fib number and sum
	else:
		return fast_fib(n-1, p2, p1+p2, summation) # pass fib term-1, fi-2, fi-1, current sum


def fib(n, summation):

	if n == 0:
		print 0, summation

	else:
		print fast_fib(n, 0, 1, 0)

def main():

	fib(10, 0)

if __name__ == '__main__':
	main()