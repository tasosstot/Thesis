let array_JS = new Float64Array(5000);
let num_array = 50 ;
var loop = 10;
initArray(array_JS);
self.onmessage = function(num)
{

  
  
    let ms = "ms"
    initArray(array_JS);
    let jsStart = performance.now()
    for ( var i = 0; i < loop; i++){
        bubbleSortJS(array_JS);
    }
    let ae = (performance.now() - jsStart)/1000
    self.postMessage(ae);
}

function initArray(array) {
    for (var i = 0, il = array.length; i < il; i++) {
       array[i] = i+100
       //array[i] = (Math.random() * 10000);
       
    }
}

function bubbleSortJS(array) {
    let len = array.length;
    for (let i = 0; i < len; i++) { //you can also use "for in", so you don't need the variable "len"
        for (let j = 0; j < len; j++) {
            if (array[j] > array[j + 1]) {
                let tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
   // return array;
    };


