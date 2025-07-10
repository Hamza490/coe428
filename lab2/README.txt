/* Hamza Mahboob - 2025/7/10


// Requirement 1 - Suppose towers(5,2,3)

/* Questions & Answers
 * 1: How will the first recursive call to towers() be invoked? Answer this
   question in the form: towers(x, y, z) where you give the actual values to the
   three parameters.

  Answer: towers(4, 2, 1)

 * 2: How many recursive calls to towers() will be made before this first recursive
  call actually returns to the initial invocation?

  Answer: 31 (T(4) = 4*T(3)+1, where T(3) = 13 (found recusively))

  Output:
  towers(5, 2, 3)
  ..towers(4, 2, 1)
  ....towers(3, 2, 3)
  ......towers(2, 2, 1)
  ........towers(1, 2, 3)
  ..........towers(0, 2, 1)
  ..........Move #1: From Tower 2 to Tower 3
  ..........towers(0, 1, 3)
  ........Move #2: From Tower 2 to Tower 1
  ........towers(1, 3, 1)
  ..........towers(0, 3, 2)
  ..........Move #3: From Tower 3 to Tower 1
  ..........towers(0, 2, 1)
  ......Move #4: From Tower 2 to Tower 3
  ......towers(2, 1, 3)
  ........towers(1, 1, 2)
  ..........towers(0, 1, 3)
  ..........Move #5: From Tower 1 to Tower 2
  ..........towers(0, 3, 2)
  ........Move #6: From Tower 1 to Tower 3
  ........towers(1, 2, 3)
  ..........towers(0, 2, 1)
  ..........Move #7: From Tower 2 to Tower 3
  ..........towers(0, 1, 3)
  ....Move #8: From Tower 2 to Tower 1
  ....towers(3, 3, 1)
  ......towers(2, 3, 2)
  ........towers(1, 3, 1)
  ..........towers(0, 3, 2)
  ..........Move #9: From Tower 3 to Tower 1
  ..........towers(0, 2, 1)
  ........Move #10: From Tower 3 to Tower 2
  ........towers(1, 1, 2)
  ..........towers(0, 1, 3)
  ..........Move #11: From Tower 1 to Tower 2
  ..........towers(0, 3, 2)
  ......Move #12: From Tower 3 to Tower 1
  ......towers(2, 2, 1)
  ........towers(1, 2, 3)
  ..........towers(0, 2, 1)
  ..........Move #13: From Tower 2 to Tower 3
  ..........towers(0, 1, 3)
  ........Move #14: From Tower 2 to Tower 1
  ........towers(1, 3, 1)
  ..........towers(0, 3, 2)
  ..........Move #15: From Tower 3 to Tower 1
  ..........towers(0, 2, 1)
  ..Move #16: From Tower 2 to Tower 3
  

 * 3: Once towers(5, 2, 3) has invoked its first recursive call to towers() and this invocation has returned, what will be printed to stdout? (i.e. What actual
 move will be made by towers(5, 2, 3) ?)

 Answer: Output: 2 3 
         Moving from 2 to 3

 * 4: How will the second recursive call to towers() be invoked? Answer this
 question in the form: towers(x, y, z) where you give the actual values to the
 three parameters.

 Answer: Assuming second resursive call refers to line 33, "towers(n-1, spare, dest);", the call is towers(4,1,3).

 * 5: Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout?

 Answer: 255 (Math: 2^8 -1)

 Description for Requirement 2:
 In this lab, I implemented a solution for the Towers of Hanoi problem and modified the main function to correctly handle different command-line argument scenarios as specified. The program now supports:

Solving the problem with 3 disks (default case),

Solving with a custom number of disks, and

Solving with a custom number of disks and user-defined source and destination towers.

Input validation was added to ensure proper tower IDs ('1', '2', or '3'), prevent identical source and destination towers, and detect invalid usage. Error messages are printed to stderr and the program exits with a non-zero status when incorrect input is provided.

I successfully met all the lab requirements and fixed the bugs mentioned in the initial version of the main() function. No further known issues remain.
 /