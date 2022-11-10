self.onmessage = function(num)
{

    var num = 70000;
    var loop = 1000;
    var src1 = new Float64Array(num);
    var src2 = new Float64Array(num);
    var res2 = new Float64Array(num);
    initArray(src1);
    initArray(src2);    

    
    let jsStart = performance.now()
    for(var i=0; i<loop; i++){
        jsMultiplyDoubleVec(src1, src2, res2, src2.length);
    }
    let ae = (performance.now() - jsStart).toFixed(2) + "ms";
    self.postMessage(ae);
}



function jsMultiplyDoubleVec(src1, src2, res, n) {
    for (var i = 0; i < n; i++) {
        res[i] = src1[i] * src2[i];
    }
}


function initArray(array) {
    for (var i = 0, il = array.length; i < il; i++) {
        array[i] = ((Math.random() * 20000) | 0) - 10000;
    }
}
     
    
