



function GD() {
    const url= " https://api.spacexdata.com/v4/launches/";
    fetch(url).then((response)=>{
        return response.json();
    }).then((data)=>{
        const { crew}=data;


        // console.log(data.capsules);
        // console.log(data.cores);
        // console.log(data.crew);
        // console.log(data.failures);
        // console.log(data.links);
        // console.log(data.payloads);
        // console.log(data.ships);
    })
}


GD()