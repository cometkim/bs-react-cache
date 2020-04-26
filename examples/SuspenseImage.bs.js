'use strict';

var ReactCache = require("react-cache");

var imageResource = ReactCache.unstable_createResource((function (src) {
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
      }), undefined);

imageResource.read("dog.png");

imageResource.preload("cat.png");

exports.imageResource = imageResource;
/* imageResource Not a pure module */
