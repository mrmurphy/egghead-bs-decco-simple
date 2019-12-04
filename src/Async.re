let let_ = (prom, cb) => Js.Promise.then_(cb, prom);
let resolve = a => Js.Promise.resolve(a);