Super-project for modularized Boost; Dawes et al. (1998).

Visit https://think-async.com/ or see packaged doc/index.html for API
documentation and a tutorial.


## Installation

Run:
```bash
$ npm i boost.cxx
```

And then include `boost/thread.hpp` as follows:

```cxx
// main.cxx
#include "node_modules/boost.cxx/boost/thread.hpp"

int main() { /* ... */ }
```

And then compile with `clang++` or `g++` as usual.

```bash
$ clang++ main.cxx  # or, use g++
$ g++     main.cxx
```

You may also use a simpler approach:

```cxx
// main.cxx
#include <boost/thread.hpp>

int main() { /* ... */ }
```

If you add the path `node_modules/boost.cxx` to your compiler's include paths.

```bash
$ clang++ -I./node_modules/boost.cxx main.cxx  # or, use g++
$ g++     -I./node_modules/boost.cxx main.cxx
```

<br>
<br>


[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/boost.cxx)
