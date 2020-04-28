

import * as ReactCache from "../src/ReactCache.bs.js";

var imageResource = ReactCache.make((function (src) {
        return new Promise((function (resolve, reject) {
                      var image = new Image();
                      image.onload = (function (param) {
                          return resolve(src);
                        });
                      image.onerror = (function (exn) {
                          return reject(exn);
                        });
                      image.src = src;
                      return /* () */0;
                    }));
      }), undefined, /* () */0);

imageResource.read("dog.png");

imageResource.preload("cat.png");

export {
  imageResource ,
  
}
/* imageResource Not a pure module */
