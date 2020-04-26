let imageResource =
  ReactCache.make(
    ~loader=
      src => {
        Js.Promise.make((~resolve, ~reject) => {
          let image = Image.make();
          image->Image.setOnLoad(_ => resolve(. src));
          image->Image.setOnError(exn => reject(. exn));
          image->Image.setSource(src);
        })
      },
    (),
  );

imageResource->ReactCache.read("dot.png");
imageResource->ReactCache.preload("cat.png");
