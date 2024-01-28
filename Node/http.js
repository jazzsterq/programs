const http = require('http');
const server = http.createServer((req,res)=>{
//     console.log(req)
// res.write('Hello dear people')
// res.end()
if(req.url=='/')res.end('Homepage')

res.end(`
<h1>OOps!<h1>`)

})
server.listen(4500)
