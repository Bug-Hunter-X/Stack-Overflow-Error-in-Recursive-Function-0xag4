function foo(x:int):int{
  var result:int = 1;
  for (var i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}

function bar():void{
  echo foo(50000);
}
//This code implements an iterative solution to compute factorial.This solution avoids the stack overflow error by not using recursion.