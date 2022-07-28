


alert(' Fish in the sky');




function timeClock()
{
    setTimeout("timeClock()", 1000);        
    now = new Date();
    alert(now);
    f_date = now.getDate()+" "+strMonth(now.getMonth())+" "+now.getFullYear()+" / "+timeFormat(now.getHours(), now.getMinutes());
    return f_date;
}

<span class="foo"><script type="text/javascript">document.write(timeClock());</script></span>


var http = require('http');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.end('Hello World!');
}).listen(8080);

