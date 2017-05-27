<?php
$myfile = fopen("newfile.txt", "r") or die("Unable to open file!");
echo "<html>";
echo "<head>";
echo "<title> IOT Server</title>";
echo "</head>";
echo "<body>";
echo "<table border=3px>";
echo  "<tr>";
  echo  "<th>Sensor 1</th>";
 echo   "<th>Sensor 2</th>";
 echo "</tr>";
 echo "<tr>";
$temp = fread($myfile,filesize("newfile.txt"));
$arr=explode("\n", $temp);
foreach ( $arr as $item ) {
 echo "<td>".$item."</td>";
}
echo "</tr>";   

fclose($myfile);
 $url1=$_SERVER['REQUEST_URI'];
    header("Refresh: 5; URL=$url1");
?>
