const MAX_NUM = 1 << 16;
const SIZE = 32;

const memory = new WebAssembly.Memory({ initial: 1 });
const importObject = {
  js: {
    mem: memory,
  },
};

WebAssembly
  .instantiateStreaming(fetch('bubble.wasm'), importObject)
  .then(results => {
    const { instance } = results;

    // Generate an array with random integers
    let l = new Int32Array(memory.buffer, 0, SIZE);
    for (let i = 0; i < SIZE; i++) {
      l[i] = Math.floor(Math.random() * (MAX_NUM + 1));
    }

    // Run bubble sort
    console.log("Input", l);
    instance.exports.sort(0, l.length);
    console.log("Output", l);
  });