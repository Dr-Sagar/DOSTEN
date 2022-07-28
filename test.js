const api_url = ' https://api.spacexdata.com/v4/launches/';
async function getSX() {
    const response = await fetch(api_url);
    const data = await response.json();
    const {links, payloads } =data;
    // console.log(data);
    // console.table (data);
    const kl =(console.table (data));


    document.getElementById('a10').textContent=kl;
}


getSX()