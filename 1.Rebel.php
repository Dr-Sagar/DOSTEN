<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?php echo "Ritesh" ;echo "CodeR22";  ?></title>
    <title><?php echo "Ritesh" ;echo "CodeR22";  ?></title>
    
</head>
<body style="background-color:cyan;text-align:center;">
<?php 
echo "Hello World 1";  
?>
<hr width = "720px";>
<?php

// Variavbles are containers
$name = "Ritesh";
$car = "Mahindra";
$rt =" 9,50,000";

echo "<h1>$name have $car of rupees $rt </h1>";
?>
<br>
<?php echo "<p style='background-color:red;color:white;'>The Ribbon Turns into Red</p>"; ?>

<!-- <?php function myTest()  { $D = 59; echo"<h1> Rex=$D</h1>";} ?> -->
<hr width = "720px";>
<?php
 
// string functions in php
$rt = "Red Hat Hacker";
echo strlen($rt);  
echo "<br>";
echo str_word_count($rt);
echo "<br>";
echo strrev($rt);
echo "<br>";
echo strpos($rt, "Hat");
echo "<br>";
echo str_replace("Hat","Chaddar",$rt);
echo "<br>";
echo str_repeat($rt, 9);
echo "<br>";
echo rtrim("<pre>   The aligator is actuallyy a crocodile  </pre>");
echo "<br>";
echo ltrim("<pre >   The aligator is actuallyy a crocodile  </pre>");
echo "<pre>";
echo ltrim("  The aligator is actuallyy a crocodile   ");
echo "</pre>";

?>
<hr width = "720px";>
<?php
// operators in php
/*
ARithmatic operators
assignment operators
comparison operators
logical operators
*/
$a = 45;
$b = 9;
// arithmetic operator
echo "For a+b, the result is".($a+$b)."<br>";
echo "For a-b, the result is".($a-$b)."<br>";
echo "For a*b, the result is".($a*$b)."<br>";
echo "For a/b, the result is".($a/$b)."<br>";
echo "For a%b, the result is".($a%$b)."<br>"; //MODULUS OPERATOR
echo "For a**b, the result is".($a**$b)."<br>";
echo "<p>"."For a*b, the result is".($a*$b).",This is (60) a paragraph &#8203;"."</p>";;
?>

<hr width = "720px";>
<?php
//Assignment operators

//$c = $d;

$c = 6;
$c += 3;
echo "For c,the value is ". $c . "<br>";

$c = 6;
$c -= 3;
echo "For c,the value is ". $c . "<br>";

$c = 6;
$c /= 3;
echo "For c,the value is ". $c . "<br>";

$c = 6;
$c *= 3;
echo "For c,the value is ". $c . "<br>";

$c = 6;
$c %= 3;
echo "For c,the value is ". $c . "<br>";  //Modulo

$c = 6;
$c **= 3;
echo "For c,the value is ". $c . "<br>";  
 
?>
<hr width = "720px";>
<?php echo"(labrador is actually a species of dog )" . "<br>" ?>
<hr width = "720px";>
<?php
//Comparison Operators

$g = 9;
$h = 7;

echo "For a+b, the  result is" . ($g + $b) .  "<br>";
echo "For a<b, the  result is" . var_dump($g < $b) .  "<br>";
echo "For a>b, the  result is" . var_dump($g >$b) .  "<br>";
echo "For a<>b, the  result is" . var_dump($g <> $b) .  "<br>";

echo "For a<b, the  result is" . ($g < $b) .  "<br>";
echo "For a>b, the  result is" . ($g >$b) .  "<br>";
echo "For a<>b, the  result is" . ($g <> $b) .  "<br>";


?>


 <?php
//Logical Operators


$m = true;
$n = false;

echo"For m and n, the result is ";
echo var_dump($m and $n);
echo var_dump($m && $n);
echo "<br>";


echo"For m or n, the result is ";
echo var_dump($m or $n);
echo var_dump($m || $n);
echo "<br>";


//Not Operator  (Ulta)


echo"For !m, the result is ";
echo var_dump(!$m );
echo var_dump(!$n);
echo "<br>";

//These Operators are actually for Boolean values ooooooor Boolean Algebra;
 ?>
     
   
   <porn> 
rebel dot js
</porn>


 



</body>
</html>

