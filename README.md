# Sorting-and-Complexity
This is a short presentation for the sorting and complexty as concepts.

## First, complexity.
Complexity of an algorithm is a measure of the amount of time and/or space required by an algorithm for an input of given size (n).
There are a lot of variables that effect the run time of anlgorithm, such as:
* The representation of abstract data types (ADT's):
	* ADT's are almost what we call, user-defined data types.
	* The representation of ADT's follow's some norms, such as:
		- Non-repetitivity: choosing non-repetitive and usable elements.
		- Keep it simple: It's better to have few simple operation that can be combined in powerfull way, rather than a complex operation.
* The efficiency of compiler: of course there are a lot of compilers for different programming languages with different ups and downs.
* The complexity the algorithm.
* Size of the input.
So how can we find a common ground to calculate the amount of time required for an algorithm to functionate if there are a lot of variables in this equation.
Actually, we can't, but what we can do is to calculate the growth of the runtime of a function (And this is a really important idea), let's take the next pseudo code where we need to calculate the number of elements in a given array:
```
	array = [1, 2, 3, 4, 5, ..., n]
	def	elem_num(array):
		n = 0
		for each i in array:
			n++
		return n
```
If we consider that every instruction takes 1 second to be executed (of course it takes much less time), we will need to wait **n** seconds for the results, but as I mentioned above, we can't really calculate the time required so we calculate the the growth of the runtime.
When we say the term "Complixity of and algorithm", we almost always talk about either, time complexity or space complexity.