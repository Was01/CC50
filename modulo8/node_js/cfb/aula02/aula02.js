const http=require('http');

http.createServer((requisicao,resposta)=>{
    resposta.writeHead(200,{'Content-Type':'text/plain'


    });
    resposta.write('Meu primeiro servidor com node-js\n');
    resposta.end()
    
}).listen(1337);
