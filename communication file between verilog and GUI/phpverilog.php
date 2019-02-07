<?php 
header('Access-Control-Allow-Origin: *');
header('Content-type: application/json');
header ('Access-Control-Request-Method: GET') ;
header(  'Access-Control-Request-Method: GET' );
header("Access-Control-Allow-Credentials: true");
header("Access-Control-Allow-Origin:*");
header("Access-Control-Allow-Methods: GET, POST, PATCH, PUT, DELETE, OPTIONS");
header("Access-Control-Allow-Headers: Origin, Accept, X-Requested-With,Content-Type, X-Auth-Token");
//all the above headers are for the evil CORS policy , 

function ParseTestbenchResultsToPoints() {


$txt_file    = file_get_contents('./try2.txt');

$TIME =[];
$AD= [] ;
$CBE = [] ;
$IRDY=[];
$TRDY=[];
$DEVSEL = [];
$GNTA=[];
$GNTB=[];
$GNTC=[];
$REQA=[];
$REQB=[];
$REQC=[];
$CLK =[];
$GNTA2=[];


//time AD , CBE, IRDY , TRDY , DEVSEL , GNTA ,GNTB,GNTC , REQA,REQB ,REQC , CLK;

$rows    = explode("\n", $txt_file);


$i=0 ;

///////////// first parsing stage , exploding strings ////////
foreach ($rows as $row ) {
    if ($row != "" ){
    
    $elements =  explode(",", $row);
   $elements = (array) $elements ;
    //var_dump($elements);
    //$elements = (array) $elements ;
    $TIME[]= (int)$elements[0];
    $AD []= $elements[1] ;
    $CBE []=$elements[2];
    $IRDY[]=$elements[3];
    $TRDY[]=$elements[4];
    $DEVSEL[]=$elements[5];
    $GNTA[]=$elements[6]; // A typo , this is meant to be FRAME , and is drawn on the GUI as the FRAME 
    $GNTB[]=$elements[7];
    $GNTC[]=$elements[8];
    $REQA[]=$elements[9];
    $REQB[]=$elements[10];
    $REQC[]=$elements[11];
    $CLK []=(int)$elements[12];
    $GNTA2[]= $elements[13] ;
    }
}


$pointsBit = [[]];

 /* $pointsAD=[];
  $pointsCBE=[];
$pointsIRDY=[];
$pointsTRDY=[];
$pointsDEVSEL=[];
$pointsGNTA=[];
$pointsGNTB=[];
$pointsGNTC=[];
$pointsREQA=[];
$pointsREQB=[];
$pointsREQC=[];
$pointsCLK =[];
*/
/////////////////

$file = [

   $AD ,
    $CBE  ,
    $IRDY,
    $TRDY,
   $DEVSEL ,
    $GNTA,
    $GNTB,
    $GNTC,
    $REQA,
    $REQB,
    $REQC ,
    $CLK 

  ] ;

//echo json_encode($file);
/////////////

///////second parsing stage , transforming points to x ,y coordinates for each line , x is the time ,y is inverted because of KonvaVue standards
for ($i=0 ; $i<count($AD); $i++) // rows
{

    for ($j=0 ; $j<10 ;$j++) // wires
    {
        
           $pointsBit[$j][] = $TIME[$i] ;
           if ($i ==0 )

           {
            if ($file[$j+2][$i]=='z' || $file[$j+2][$i]=='x' )
            {  $pointsBit[$j][]= 25 ;  }

           else if ($file[$j+2][$i]=="1")   $pointsBit[$j][]= 0 ;
           else if ($file[$j+2][$i]=="0")   $pointsBit[$j][]= 50 ;

           }
            else if($file[$j+2][$i]=="z"|| $file[$j+2][$i]=='x' )
            {
            $pointsBit[$j][]=   $pointsBit[$j][count($pointsBit[$j])-2];
            $pointsBit[$j][] = $TIME[$i] ;  $pointsBit[$j][]= 25;
            }
    
            else    if($file[$j+2][$i]=="0")
            {
            $pointsBit[$j][]=   $pointsBit[$j][count($pointsBit[$j])-2];
            $pointsBit[$j][] = $TIME[$i] ;  $pointsBit[$j][]= 50;
            }

            else  if($file[$j+2][$i]=="1")

            {
            $pointsBit[$j][]=   $pointsBit[$j][count($pointsBit[$j])-2];
            $pointsBit[$j][] = $TIME[$i] ;  $pointsBit[$j][]= 0; //konva has inverted Y- axis 
            }

    }


}


//////////third parsig stage , x,y coordinates for the buses , where it is more graphical not just 1 and 0 , more like this
///////// <==><=><=====>

$upAD = [] ;
$downAD =[] ;

$upCBE = [] ;
$downCBE = [] ;

$pointsBus = [ $upAD , $upCBE , $downAD  , $downCBE];

for ($p=0 ; $p<count($AD); $p++){

    for($u=0 ;$u<2 ;$u++ ) //up loop
    {
        if($p==0)
        {
        $pointsBus[$u][]= $TIME[$p] ;
        $pointsBus[$u][]= 25 ;
        $pointsBus[$u][]= $TIME[$p]+20 ;
        $pointsBus[$u][]= 0;

        }

        else { 
            if (($AD[$p]==$AD[$p-1]) && $u==0 )
            {
                $pointsBus[$u][]= $TIME[$p] ;
                $pointsBus[$u][]= 0 ;
            }
            else if (($AD[$p]!=$AD[$p-1]) && $u==0  )
            {
                $pointsBus[$u][]= $TIME[$p]-20 ;
                $pointsBus[$u][]= 0 ;
                $pointsBus[$u][]= $TIME[$p] ;
                $pointsBus[$u][]=25 ;
                $pointsBus[$u][]= $TIME[$p]+20 ;
                $pointsBus[$u][]=0 ;
                
            }

            if (($CBE[$p]==$CBE[$p-1]) && $u==1 )
            {
                $pointsBus[$u][]= $TIME[$p] ;
                $pointsBus[$u][]= 0 ;
      
            }
            else if (($CBE[$p]!=$CBE[$p-1]) && $u==1  )
            {
                $pointsBus[$u][]= $TIME[$p]-20 ;
                $pointsBus[$u][]= 0 ;
                $pointsBus[$u][]= $TIME[$p] ;
                $pointsBus[$u][]=25 ;
                $pointsBus[$u][]= $TIME[$p]+20 ;
                $pointsBus[$u][]=0 ;
                
            }
        
        
        }
        
    }



    for($d=2 ;$d<4 ;$d++ ) //down loop
    {
        if($p==0)
        {
        $pointsBus[$d][]= $TIME[$p] ;
        $pointsBus[$d][]= 25 ;
        $pointsBus[$d][]= $TIME[$p]+20 ;
        $pointsBus[$d][]= 50;

        }

        else { 
            if (($AD[$p]==$AD[$p-1]) && $d==2 )
            {
                $pointsBus[$d][]= $TIME[$p] ;
                $pointsBus[$d][]= 50 ;
            }
            else if (($AD[$p]!=$AD[$p-1]) && $d==2  )
            {
                $pointsBus[$d][]= $TIME[$p]-20 ;
                $pointsBus[$d][]= 50 ;
                $pointsBus[$d][]= $TIME[$p] ;
                $pointsBus[$d][]=25 ;
                $pointsBus[$d][]= $TIME[$p]+20 ;
                $pointsBus[$d][]=50 ;
                
            }

            if (($CBE[$p]==$CBE[$p-1]) && $d==3 )
            {
                $pointsBus[$d][]= $TIME[$p] ;
                $pointsBus[$d][]= 50 ;
      
            }
            else if (($CBE[$p]!=$CBE[$p-1]) && $d==3  )
            {
                $pointsBus[$d][]= $TIME[$p]-20 ;
                $pointsBus[$d][]= 50 ;
                $pointsBus[$d][]= $TIME[$p] ;
                $pointsBus[$d][]=25 ;
                $pointsBus[$d][]= $TIME[$p]+20 ;
                $pointsBus[$d][]=50 ;
                
            }
        
        
        }
        
    }




}




/////////////end parsing ///////////////////




/////appending bus points to the points array that will be sent to the front end 
///// to do in a later version : separate buses and lines arrays in two links for better bug tracking and control in adding new features

array_unshift($pointsBit , $pointsBus[3] );
array_unshift($pointsBit , $pointsBus[1] );
array_unshift($pointsBit , $pointsBus[2] );
array_unshift($pointsBit , $pointsBus[0] );


//// appending the text that will be present inside the bus waveform //////////
$pointsBit[14]= $TIME;
$pointsBit[15]=$AD ;
$pointsBit[16]=$CBE ;








return $pointsBit;
}











echo json_encode( ParseTestbenchResultsToPoints())    ;



?>