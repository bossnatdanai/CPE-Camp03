<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>SELECT TEST</title>
</head>
<body>
<?php
$servername = "localhost";
$username = "nutjung155";
$password = "";
$dbname = "iot";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
mysqli_set_charset($conn,"utf8");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql = "SELECT Name,PhoneNumber FROM alfa";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        echo "ชื่อ: " . $row["Name"]. " - เบอร์โทร: " . $row["PhoneNumber"]."<br>";
    }
} else {
    echo "0 results";
}
$conn->close();
?>
</body>
</html>