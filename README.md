# Building on OS X

```sh
$ brew install cmake openssl
$ mkdir _build
$ cd _build
$ cmake .. -DWITH_SSL=/usr/local/Cellar/openssl@1.1/1.1.1g/
$ make -j 10
```

# Build on Ubuntu / Debian

```sh
$ apt-get install g++ cmake libssl-dev
$ mkdir _build
$ cd _build
$ cmake ..
$ make -j 10
```
