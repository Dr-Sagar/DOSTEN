<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?php echo "Doclocator" ?></title>
</head>



<body>


    <?php
    echo (90+6);
    ?>
    <?php  echo"<br>"; ?>
<?php 
echo "<p style=background-color:orange;width: 5px;> Hello World 1 </p>";  
?>
   <?php 
echo " <br> <br>";  
?>





   <?PHP

   //if else statement
$a = 65;
$b = 9;

if($a > 78 ) {
    echo "a is greater than 78";
}
else{
    echo" a is smaller than 78";

}

echo"<br>";
?>

<?php   //else if statement
$age = 42;

if ($age>18){
    echo "you can drink alcohol";
}

    elseif($age>30){
        echo "you can drink rum";
}
else{
    echo"you can drink water and Tea";
}
echo"<br>";
echo "Done";


   ?>

<?php   //else if statement
$age = 42;
    
if ($age>18){
    echo "you can drink alcohol,";
}

if($age>30){
        echo "you can drink rum";
}
else{
    echo"you can drink water and Tea";
}
echo"<br>";
echo "Done";


   ?>

<?php
echo "<br> <br>";
$age = 44;

if($age<25){
     echo "you can not drive";
}elseif($age>65){
    echo "you can not drive";
}elseif($age>18){
    echo "gaadi ko haat nehin lagane ka";
} else{
    echo "You can Drive";
}


?>

<?php
//Switch Case Statement


echo "<br> <br>";
$age = 12 ;

switch($age){
        case 12:
            echo "your age is 12";
            break;

        case 45:
            echo "you are 45 yrears old";
            break;

        case 56:
            echo "you are 56 years old";
            break;

        default:
              echo "This is your age";
              break;

  
}

?>




</body>
</html>