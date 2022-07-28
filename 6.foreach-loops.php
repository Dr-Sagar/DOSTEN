<?php
echo "Foreach Loops  <br>";


$arr  =array("bananas","appales","harpic","Bread");

for ($i=0; $i < count($arr); $i++) {
 
    echo $arr[$i];
    echo "<br>";
}


// foreach loops
foreach ($arr as $key => $value) {
    echo "$value  <br>"; 
    # code...
}


?>