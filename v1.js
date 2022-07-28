let butter = document.getElementById("butter")

let butcontain = document.getElementById("contain")
 
  

function GD(){
    url = "https://api.spacexdata.com/v4/launches/";
    fetch(url).then((Response)=>{
        return Response.json();
    }).then((data)=>{
        console.log(data);
        document.getElementById("pop").innerHTML=(data);
    })
    }


    /*
function PD(){
    url = "https://api.spacexdata.com/v4/launches/";
    fetch(url).then((Response)=>{
        return Response.text();
    }).then((data)=>{
        console.log(data);
    })
    }
*/


    console.log("Before GD")
    GD()
    console.log("After GD")

// document.getElementById("pop").innerHTML=(sort(data));


    // PD()