

var p = [];
// p.push({x:1.0,y:0.0});

var c = 1000000000;
// var c = 100;
var d = 1/c;
// console.log(d);


function dest(a, b) {
    return Math.sqrt(Math.pow(a.x - b.x, 2) + Math.pow(a.y - b.y, 2))
}

var s = 0.0;
var a={x:1.0,y:0.0},b;
for(i=0; i<c; i++) {
    b = {
        x: 1.0 - d * i,
        y: 0
    }
    b.y = Math.sqrt(1.0 - Math.pow(b.x,2))
    //p.push(z)
    s += dest(a,b);
    a = b;
}
// p.push({x:0.5,y:0.5});

// for(i=0; i<c; i++) {
//     s += dest(p[i+1],p[i]);
// }
// console.log(s);
// console.log(s/8);
console.log(`iter=${c}, real_s=${Math.PI*2}, calc_s=${s*4}, real_pi=${Math.PI}, calc_pi=${s*4/2}`);

