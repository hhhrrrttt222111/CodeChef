## Smart Strategy (SMRSTR)

The solution is given for the problem mentioned [here](https://www.codechef.com/problems/SMRSTR).  
The solution is written in ```C``` 

---

### Solution Breakdown

Let's define the variables and their jobs first!

-	``` t = test cases ```  
-	``` n = size of divisiors array D ```
-	``` q = size of queries array X ```
-	``` a = array D```
-	``` b = array X```
-	``` i = loop variable```
-	``` divisor = product of all elements of array D```

Before jumping start into the problem, we must understand that we need to divide _every_ element of array X with the _product_ of every element of array D.  
The solution is as simple as that. Therefore, find the product of the entire array D and store it into our variable called ```divisor```.  

Now, simply loop through our queries and divide each element of array X by our divisor.


#### Corner Cases

Problems on CodeChef must be solved through a lot of analytical thinking. Hence, always remember to think of corner cases(or rather outliers) to your solution.  
In our problem, it may be so that ```divisor = 0```. And, it is not possible to divide a number by 0. Therefore, in our solution we must implement this corner case as follows: 

``` 
		if(divisor==0)
		{
			printf("0 ");
			continue;
		}
	
```

That is all that we need to keep in mind while solving this particular problem! :)