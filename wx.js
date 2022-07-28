

function GD() {
    url= " https://api.spacexdata.com/v4/launches/";
    fetch(url).then((response)=>{
        return response.json();
    }).then((data)=>{
        console.log(data);
        // console.log(data);
        document.getElementById('a').textContent=data.length;
       // console.log(data.length );  
         console.table(data.length );


    })
}


GD()