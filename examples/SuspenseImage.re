let imageResource = ReactCache.make((src: string) => {
  Js.Promise.make((~resolve, ~reject) => {
    let image = Image.make();
    image->Image.setOnLoad(_ => resolve(. src));
    image->Image.setOnError(exn => reject(. exn));
    image->Image.setSource(src);
  });
}, None);

imageResource->ReactCache.read;
imageResource->ReactCache.preload;
