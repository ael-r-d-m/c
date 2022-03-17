## Matrix Multiplication Algorithm and Flowchart

Multiplication of matrices is a very popular tutorial generally included in Arrays of C Programming. In this post, we’re going to discuss an algorithm for Matrix multiplication along with its flowchart, that can be used to write programming code for matrix multiplication in any high level language. This will help you visualize the working mechanism of multiplication of matrices, and understand how to write code following what steps.

As the matrix is a collection of numbers in rectangular form, its multiplication procedure is not the same as multiplication of numbers. There are certain distinct rules which must be followed during matrix multiplication by manual method and by using programming.

So, before going through the algorithm and flowchart of matrix multiplication, here is a brief overview of how matrix multiplication is done:

- Each matrix has fixed number of rows and columns and for multiplication to be feasible, the number of rows of first matrix must be equal to number of columns of second matrix.

For example: consider a matrix A of order 2×3 and another matrix B of order 3×2, in this case the A x B is possible because number of rows of A = number of columns of B.

![matrix-multiplication](https://github.com/ael-r-d-m/c/blob/main/cwithc/matrix-multiplication.png)

- The matrix multiplication does not follow the Commutative Property. It means that, if A and B are considered to be two matrices satisfying above condition, the product AB is not equal to the product BA i.e. AB ≠ BA.

- The order of product of two matrices is distinct. When two matrices are of order m x p and n x m, the order of product will be n x p.

- Matrix multiplication follows distributive rule over matrix addition.
    
    Left Distribution: A ( B + C ) = AB + AC
    
    Right Distribution ( A + B ) C = AC + AC

- Scalar multiplication is compatible with multiplication of matrix.
    
    λ ( AB ) = ( λA ) B and A ( Bλ )
    
### Matrix Multiplication Algorithm:
```
1. Start
2. Declare variables and initialize necessary variables
3. Enter the element of matrices by row wise using loops
4. Check the number of rows and column of first and second matrices
5. If number of rows of first matrix is equal to the number of columns of second matrix, go to step 6. Otherwise, print matrix multiplication is not possible and go to step 3.
6. Multiply the matrices using nested loops.
7. Print the product in matrix form as console output.
8. Stop
```

### Matrix Multiplication Flowchart:

![flowchart](https://github.com/ael-r-d-m/c/blob/main/cwithc/matpf.png)
