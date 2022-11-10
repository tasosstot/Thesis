self.onmessage = function(num)
{

    let jsStart = performance.now()
    jsPrintFibonacci(45);
    
    let ms = "ms"
    let ae = (performance.now() - jsStart).toFixed(2) + ms;
    self.postMessage(ae);
}


// let jsStart = performance.now()
// jsPrintFibonacci(num);
// let ae = Math.round(performance.now() - jsStart)/1000
// self.postMessage(ae);

function jsFibonacci(num){
    if (num === 1) return 1;
    if (num === 2) return 1;
    return jsFibonacci(num-1) + jsFibonacci(num-2);

}


const jsPrintFibonacci = num =>{

    for(let i=3; i <=num; i++){
        jsFibonacci(i);         
    }
     
    
}