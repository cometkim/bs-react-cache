

import * as Caml_option from "bs-platform/lib/es6/caml_option.js";
import * as ReactCache from "../lib/ReactCache";

function setGlobalCacheLimit(prim) {
  ReactCache.unstable_setGlobalCacheLimit(prim);
  return /* () */0;
}

function make(prim, prim$1, prim$2) {
  return ReactCache.unstable_createResource(prim, prim$1 !== undefined ? Caml_option.valFromOption(prim$1) : undefined);
}

export {
  setGlobalCacheLimit ,
  make ,
  
}
/* ../lib/ReactCache Not a pure module */
