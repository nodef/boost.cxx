# Boost C++ Libraries

The Boost project provides free peer-reviewed portable C++ source libraries.

We emphasize libraries that work well with the C++ Standard Library. Boost
libraries are intended to be widely useful, and usable across a broad spectrum
of applications. The Boost license encourages both commercial and non-commercial use
and does not require attribution for binary use.

The project website is www.boost.org, where you can obtain more information and
[download](https://www.boost.org/users/download/) the current release.

<br>

## Installation

Run:

```bash
$ npm i boost.cxx
```

And then include `boost/thread.hpp` as follows:

```cxx
// main.cxx
#include <boost/thread.hpp>

int main() { /* ... */ }
```

Finally, compile while adding the path `node_modules/boost.cxx` to your compiler's include paths.

```bash
$ clang++ -I./node_modules/boost.cxx main.cxx  # or, use g++
$ g++     -I./node_modules/boost.cxx main.cxx
```

You may also use a simpler approach with the [cpoach](https://www.npmjs.com/package/cpoach.sh) tool, which automatically adds the necessary include paths of all the installed dependencies for your project.

```bash
$ cpoach clang++ main.cxx  # or, use g++
$ cpoach g++     main.cxx
```

<br>
<br>


[![](https://raw.githubusercontent.com/qb40/designs/gh-pages/0/image/11.png)](https://wolfram77.github.io)<br>
[![SRC](https://img.shields.io/badge/src-repo-green?logo=Org)](https://github.com/boostorg/boost)
[![ORG](https://img.shields.io/badge/org-nodef-green?logo=Org)](https://nodef.github.io)
![](https://ga-beacon.deno.dev/G-RC63DPBH3P:SH3Eq-NoQ9mwgYeHWxu7cw/github.com/nodef/boost.cxx)
