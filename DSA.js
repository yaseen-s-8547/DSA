num=123;
reversed=0;
original=num;
 while(num>0){
    digit=num%10;
    reversed=reversed*10+digit;
    num=Math.floor(num/10);
 }
console.log(original===reversed?"its a paliandrom":"not a paliandrom");
console.log("--------------------------------------------------------------------------");
//w a p to print factorial
num=5
fact=1;
i=1
while(i<=num){
   fact=fact*i
   i++
}
 console.log("factorial of number is:"+fact);