<template>
  <div id="app">
   
   <div class=" container-fluid  " style="margin-left :20px ; margin-bottom:20px" >  

     <div  class=""  >
<div class="row ">
    <div class="col-lg-1">
      <v-stage ref="stage" :config="stageSizeLow">
      <v-layer>
   <v-text v-if="pointsBit" v-for="text in texts" :key="text.id" :config="text"/>
      </v-layer>
      </v-stage>
   
    </div>
   <div style= " overflow: scroll; width: 1000px;height : 800px ;    margin-left: 10px " class="col-lg-9">
    <v-stage ref="stage" :config="stageSizeHigh">
      <v-layer>
  <v-text v-if="pointsBit " v-for="line in linetexts" :key="line.id" :config="line"/> 
  
  <v-text v-if="pointsBit" v-for="text in CBEtexts" :key="text.id" :config="text"/>

     <v-line v-for="line in lines" :key="line.id" :config="line"/> 
      
     


      </v-layer>
      <v-layer ref="dragLayer"></v-layer>
    </v-stage>
   </div>

  
</div>



     </div>
     



  

    </div>


          <div class="container-fluid row" style="width:100%">
<div class="col-lg-8 col-md-5" style="overflow:auto">
<v-stage ref="stage"
      :config="stageSizeLow"
>
      <v-layer ref="layer">
     <!-- devices , drag and drop on bus to connect-->
     <v-image
          :config="{
            image: image ,
            scale: { x :0.5 , y:0.5} ,
            draggable :true ,
            x:0 ,
            y:20,
          width: 200,
          height: 200,
          fill: 'red',
           shadowOffsetX: 15,
        shadowOffsetY: 15,
         shadowOpacity: 0.8,
         shadowColor: 'black',
          shadowBlur: 20 ,
          shadowColor: 'red',

           opacity: 0.8,
          id :1
           }"
           @dragend="connect"
        />
<v-image
          :config="{
            image: image ,
            scale: { x :0.5 , y:0.5} ,
            x: 200 ,   y:20,
            draggable :true ,
          width: 200,
          height: 200,
          fill: 'red',
           shadowOffsetX: 15,
        shadowOffsetY: 15,
         shadowOpacity: 0.8,
         shadowColor: 'red',
          shadowBlur: 20 ,
           opacity: 0.8,
          id :2
           }"
           @dragend="connect"
        />
        <v-image
          :config="{
            image: image ,
            scale: { x :0.5 , y:0.5} ,
            x: 400 ,   y:20,
            draggable :true ,
          width: 200,
          height: 200,
          fill: 'red',
           shadowOffsetX: 15,
        shadowOffsetY: 15,
         shadowOpacity: 0.8,
         shadowColor: 'red',
          shadowBlur: 20 ,
           opacity: 0.8,
          id :3
           }"
           @dragend="connect"
        />

        <!--         bus lines                 -->

        <v-group :config = " {  }" >
        <v-line :config =" {

      points: [30, 350, 720, 350],
      stroke: 'blue',
      strokeWidth: 10,
      lineCap: 'round',
      lineJoin: 'round',

      dash: [29, 20, 0.001, 20],

     

        }"
        />
        <v-line :config =" {

 points: [30, 400, 720, 400],
      stroke: 'blue',
      strokeWidth: 10,
      lineCap: 'round',
      lineJoin: 'round',

      dash: [29, 20, 0.001, 20],



        }"
        />
        <v-line :config =" {

 points: [30, 450, 720, 450],
      stroke: 'blue',
      strokeWidth: 10,
      lineCap: 'round',
      lineJoin: 'round',

      dash: [29, 20, 0.001, 20],

     

        }"
        />

</v-group>

      </v-layer>

      <v-layer ref="dragLayer"></v-layer>
    </v-stage>

<p  style="fontSize :60px ;width:800px"> up is the bus and the devices to drag and drop the devices you want to connect to the bus.

</p>
</div>

<div class="col-lg-2" style="width: 70px">
        <div class="form-group " style="margin-up : 20px ; padding : 20px">
                    <div class="input-group mb-3 ">
                    <div class="input-group-prepend">
                      <label class="input-group-text" for="inputGroupSelect01">Choose Master</label>
                    </div>
                    <select class="custom-select" v-model="tempmaster" id="inputGroupSelect01">
                    <!--values are hard coded for simplicity -->
                      <option v-if="devices.includes(1)" value="1">A</option>
                      <option v-if="devices.includes(2)" value="2">B</option>
                      <option v-if="devices.includes(3)" value="3">C</option>
                    </select>
                  </div>

                  <div class="input-group mb-3">
                    <div class="input-group-prepend">
                      <label class="input-group-text" for="inputGroupSelect01">Choose slave</label>
                    </div>
                    <select class="custom-select" v-model="tempslave" id="inputGroupSelect01">
                    
                      <option v-if="(devices.includes(1)&& tempmaster !=1)" value="1">A</option>
                      <option v-if="(devices.includes(2)&& tempmaster !=2)" value="2">B</option>
                      <option v-if="(devices.includes(3)&& tempmaster !=3)" value="3">C</option>
                    </select>
                  </div>

                  <div class="input-group flex-nowrap">
                    <div class="input-group-prepend">
                      <span class="input-group-text" id="addon-wrapping"># words</span>
                    </div>
                    <input type="text" class="form-control" v-model="tempwords" placeholder="number of words" aria-label="Username" aria-describedby="addon-wrapping">
                  </div>
      
               
                     <div class="input-group mb-3 ">
                    <div class="input-group-prepend">
                      <label class="input-group-text" for="inputGroupSelect01">OPERATION</label>
                    </div>
                    <select class="custom-select" v-model="tempCBE" id="inputGroupSelect01">
                    
                      <option selected value="0">READ</option>
                      <option  value="1">WRITE</option>
                   
                    </select>
                  </div>
               
               
  
              

              <button  @click="AddTrans" class="btn btn-primary">Add transaction To Scenario</button>
        </div> <!-- end form -->


          <table class="table table-hover">
            <thead>
              <tr>
                <th scope="col">#</th>
                <th scope="col">Transaction</th>
                <th scope="col">action</th>
                
              </tr>
            </thead>
            <tbody>
              <tr v-for="transaction in transactionsBeautiful" :key="transaction.id"> 
                <th scope="row">{{transaction.id}}</th>
                <td>{{transaction.transaction}}</td>
                <td><button @click="DeleteTransaction(transaction.id)">delete </button> </td>
               
              </tr>
              
            </tbody>
      
          </table>
<div class="row ">
  <div class="col-lg-5">
 <button style="align: center ; margin:40px; padding:40px"   @click="START2" class="btn btn-danger">Start Scenario</button>
  </div>

  <div class="col-lg-5" >
<button @click=" waveclick() " class="btn btn-success"  style="align: center ; margin:40px; padding:40px ; "  v-if="pointsBit.length">Draw Waves ! </button>


  </div>
 <p  style="fontSize :60px ;width:800px"> up is the scenario builder , choose the master device , slave device , read or write operation , number of words transmitted </p>
</div>
 </div>

 </div>


<!-- end -->



  </div>
</template>

<script>
import uniq from 'lodash/uniq';
import 'bootstrap/dist/css/bootstrap.css'
import 'bootstrap-vue/dist/bootstrap-vue.css'


const widthhigh =9999;
const widthlow =1700;
const height = 790;
const axios = require('axios');
let vm ={};
export default {
  name: 'app',
  data () {
    return {
      pointsBit: [] ,
  
 names : [
 "AD",
 "CBE",
 "IRDY",
 "TRDY",
 "DEVSEL",
 "FRAME",
 "GNTB",
 "GNTC",
 "REQA",
 "REQB",
 "REQC",
 "CLK ",
 
 ]
      ,
lines : [] ,
linetexts : [] ,
CBEtexts :[] 
,
xoffsets: [],
      yoffsets : [
0  ,
0 , //the numbers that are equal are for the bus lines , each bus line consists of two lines upper and lower
60 ,
60,
120 ,
180 ,
240 ,
300 ,
360 ,
420 ,
480 ,
540 ,
600 ,
660 ,
720  ,
780

 ],
      
     texts : []  //texts on left
      ,

       stageSizeHigh: { // the wave form area
        width: widthhigh,
        height: height ,
       scale : { x: 2 , y:1 } ,
     
  
      }
      ,
      
      
      stageSizeLow: { // the bevices drag and drop area and the line names on the left area
        width: widthlow,
        height: height ,
       scale : { x: 2 , y:1 } ,
     
  
      } ,

       image: null ,

//////////////// gui /////////////////
devices : [] ,
tempmaster: [] ,
tempslave :[] ,
tempwords: [] ,
tempCBE : [] ,
transactions : [] ,
transactionsBeautiful :[] ,
Zoom : [] //didn't implement zooming yet

     
    }
  } ,

beforeMount: function () {
// this.getForm; this.getText;
 },
mounted () {

   vm = this;
}

 ,

  methods :
  {
          getFrom :function () {

            this.linetexts =[] ;// this.lines=[] ;
             this.CBEtexts=[] ; 
          
        axios.get('http://localhost/tb3talta/New_folder/phpverilog.php' , {  // stored it in my htdocs
          params: {
                  
              },
              headers: {
                

              }
          }).then( (response) => {
          this.pointsBit =response.data ;
          })
          .catch(function (error) {
            console.log(error);
          }) ;

          this.getText() ;


        },



        getText : function (){
        var i ; 
        this.linetexts = [] ;
        this.xoffsets = [];
          for (i=0 ; i<this.pointsBit[14].length; i++)
          {

            // For AD text
            if(this.pointsBit[15][i]==this.pointsBit[15][i-1]&& i!=0){

            }
            else
        {let arr = { "text": this.pointsBit[15][i] , "fontSize": 15,  "x" : Number( this.pointsBit[14][i] )+70 ,"y": this.yoffsets[0]+20 } ;

        this.xoffsets .push (this.pointsBit[14][i]) ;
        this.linetexts.push( arr) ; 
        }

////////////for CBE text
        if(this.pointsBit[16][i]==this.pointsBit[16][i-1]&& i!=0){

            }
            else
        {let arr = { "text": this.pointsBit[16][i] , "fontSize": 15,  "x" : Number( this.pointsBit[14][i] )+70 ,"y": this.yoffsets[2]+20 } ;

        this.xoffsets .push (this.pointsBit[14][i]) ;
        this.CBEtexts.push( arr) ; 
        }

//////////////////////////


          }  ;


        this.texts=[];
        var k,n ;
        n=0;
        for (k=0 ; k<15; k++){
          
          if(k==1){k=2;}
          else if(k==3){k=4;}
        let arr2 = { "text": this.names[n] , "fontSize": 20,  "y" : (Number( this.yoffsets[k])) };

        //console.log(n);
        //console.log("k is "+k);

        n++;
        this.texts.push( arr2) ;

          } ;




          this.lines=[];
        var k ;
        for (k=0 ; k<15; k++){ 

        let arr3 = { x: 50,
                "y": this.yoffsets[k],
                "points": this.pointsBit[k],
                "tension": 0.1,
                "stroke": 'black' ,
                 "lineCap": 'round',
                  "lineJoin": 'round',
                  //"strokeWidth": 5
                  };

        this.lines.push( arr3) ;


          }



          } 

,

connect : function (e) {
//e.target.setAttrs({  x :22});
   const stage = vm.$refs.stage.getNode();
stage.draw();
const shape = e.target ;
if(shape.attrs.y>250 && shape.attrs.y<550 && shape.attrs.x >30  && shape.attrs.x <720)
 {console .log ("device "+e.target.attrs.id+" added" );
  this.devices.push (  (e.target.attrs.id) ) ;
}
else {

  this.devices = this.devices.filter(c => c !== e.target.attrs.id) ;
}


} ,

AddTrans :function() {
this.transactions.push ( {"transaction"  : this.tempmaster +","+this.tempslave + "," + this.tempCBE +","+this.tempwords}) ;
var letter1 ;
var letter2 ;
var cbe ;
if (this.tempmaster ==1) letter1 ="A" ;
if (this.tempmaster ==2) letter1 ="B" ;
if (this.tempmaster ==3) letter1 ="C" ;

if (this.tempslave ==1) letter2 ="A" ;
if (this.tempslave ==2) letter2 ="B" ;
if (this.tempslave ==3) letter2 ="C" ;

if(this.tempCBE==1) cbe ="Write To" ;
if(this.tempCBE==0) cbe ="Read From" ;

this.transactionsBeautiful.push ({  "transaction" : letter1 +" "+cbe+" "+letter2+" "+this.tempwords+" words"   });




} ,

DeleteTransaction : function (index) {

//console.log("index is "+index);
this.transactionsBeautiful.splice(index,1);
this.transactions.splice(index,1);


} ,

START : function() {


this.pointsBit=[]; this.CBEtexts = [] ; this.linetexts= []; this.lines=[] ;
var send=[] ;
var i ;
for ( i=0 ; i<this.transactions.length ; i++)

{

 send .push(this.transactions[i].transaction ) ;

}


//console.log(send);

//console.log("I am here");



axios.post('http://localhost/tb3talta/New_folder/toverilog.php', {
    data: send,
    
  })
  .then( (response) => {
          console.log(response);
          }).catch(function (error) {
    console.log(error);
  });

 this.getFrom();

this.transactions=[]; this.transactionsBeautiful=[];



} ,
START2 : function () {

this.START() ; 
this.START() ;
//delay issues because of async nature , but didn't work it stil needs double click on the (get wave) button to see the latest results 

}
 ,
 waveclick : function() { this.getFrom() ; this.getFrom();    //another trial , but still no luck , this was in lack of time so I didn't try creative solutions back then , any pull is appreciated
 }


} ,
computed : {}
,
  created() {
    const image = new window.Image();
    image.src = 'http://localhost/tb3talta/devicre.jpg';

    image.onload = () => {
      // set image only when it is loaded
      this.image = image;
    };
  }

}


</script>

<style>


</style>
