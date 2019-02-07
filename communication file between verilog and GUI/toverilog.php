<?php 
header('Access-Control-Allow-Origin: *');
header('Content-type: text/plain');
header ('Access-Control-Request-Method: POST') ;
header("Access-Control-Allow-Credentials: true");
header("Access-Control-Allow-Origin:*");
header("Access-Control-Allow-Methods: GET, POST, PATCH, PUT, DELETE, OPTIONS");
header("Access-Control-Allow-Headers: Origin, Accept, X-Requested-With,Content-Type, X-Auth-Token");

//all the above headers are for the evil CORS policy , 

function runVerilogModule() {
    $data = json_decode(file_get_contents("php://input"), true);

   
    $p="" ;
for ($i=0 ; $i<=count($data["data"]); $i++) {



    if ($i !=  count($data["data"])-1 ){
        $p.= (string) $data["data"][$i] . "\r\n";


    }

    else {
        $p.= (string) $data["data"][$i] . "\r\n". "4,3,2,1"; // the last row tells the verilog testbnch that the scenario ended


    }
   

}



file_put_contents("try.txt", "");
file_put_contents("try.txt", $p);




 exec(' simoutput.exe -tclbatch myPCI.tcl -gui ');



return $data;
}






 json_encode( runVerilogModule())    ;



?>