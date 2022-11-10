self.onmessage = function(num)
{

    
    var big_num = 3000000; 
    let jsStart = performance.now()
    for(var i=0; i<500; i++){
        jsMUltiply = jsMUltiplyCalc(big_num,big_num,big_num);
    }
    let ae = (performance.now() - jsStart).toFixed(2) + "ms";
    self.postMessage(ae);
}


// let jsStart = performance.now()
// jsPrintFibonacci(num);
// let ae = Math.round(performance.now() - jsStart)/1000
// self.postMessage(ae);

function jsMUltiplyCalc(a, b, big_num){
    var c = 1.0;
    for (var i = 0; i < big_num; i++) {
        c = c * a * b;
    }
return c;
}
     
    
