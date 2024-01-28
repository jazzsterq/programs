const {readFileSync,writeFileSync}= require('fs');

const first = readFileSync('./content/first.txt','utf8')
writeFileSync(
    './content/result.txt',
    `Here is the content ${first}`,{flag:'a'})
    
console.log(first)