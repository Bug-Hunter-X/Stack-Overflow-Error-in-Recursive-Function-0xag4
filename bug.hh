function foo(x:int):int{
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar():void{
  echo foo(5);
}

//The function foo is recursive, it works fine for small values of x but it might result in stack overflow for larger values of x. 
//The maximum recursion depth depends on the system.
//This is a common problem in recursive functions. To solve this, we can use iteration instead of recursion.
