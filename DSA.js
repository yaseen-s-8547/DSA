num=123;
reversed=0;
original=num;
 while(num>0){
    digit=num%10;
    reversed=reversed*10+digit;
    num=Math.floor(num/10);
 }
console.log(original===reversed?"its a paliandrom":"not a paliandrom");
 