# lavaplayer-natives

Native libraries for Lavaplayer.

---

## Target Platforms

| Target Identifier | Platform / OS | Architecture | C Runtime | Minimum Requirements |
| :--- | :--- | :--- | :--- | :--- |
| `darwin` | macOS | `x86_64` & `arm64` (Universal) | macOS system libc | macOS 10.13+ (x86_64), macOS 11.0+ (arm64) |
| `win-x86-64` | Windows | `x86_64` (64-bit) | MSVC (Static `/MT`) | Windows 7 SP1+ |
| `win-x86` | Windows | `x86` (32-bit) | MSVC (Static `/MT`) | Windows 7 SP1+ |
| `linux-x86-64` | Linux | `x86_64` (64-bit) | glibc | GLIBC >= 2.31 |
| `linux-x86` | Linux | `x86` / `i686` (32-bit) | glibc | GLIBC >= 2.31 |
| `linux-aarch64` | Linux | `aarch64` / `arm64` (64-bit) | glibc | GLIBC >= 2.31 |
| `linux-armhf` | Linux | `armv7-a` (32-bit Hard-Float) | glibc | GLIBC >= 2.31 |
| `linux-arm` | Linux | `arm` (32-bit Hard-Float) | glibc | GLIBC >= 2.31 |
| `linux-aarch32` | Linux | `armv7-a` (32-bit SoftFP) | glibc | GLIBC >= 2.31 |
| `linux-musl-x86-64` | Alpine / Musl Linux | `x86_64` (64-bit) | musl | Musl >= 1.2 (Alpine Linux 3.x+) |
| `linux-musl-aarch64` | Alpine / Musl Linux | `aarch64` / `arm64` (64-bit) | musl | Musl >= 1.2 (Alpine Linux 3.x+) |

---

## Bundled Native Codecs & Libraries

| Library | Version | Upstream Source |
| :--- | :--- | :--- |
| **Opus** | `1.5.2` | [xiph/opus](https://github.com/xiph/opus) |
| **mpg123** | `1.33.6` | [mpg123.de](https://www.mpg123.de/) |
| **libvorbis** | `1.3.7` | [xiph/vorbis](https://github.com/xiph/vorbis) |
| **libogg** | `1.3.6` | [xiph/ogg](https://github.com/xiph/ogg) |
| **libsamplerate** | `0.2.2` | [libsndfile/libsamplerate](https://github.com/libsndfile/libsamplerate) |
| **fdk-aac** | `2.0.3` | [mstorsjo/fdk-aac](https://github.com/mstorsjo/fdk-aac) |

---

## Building Locally

Prerequisites:
- Java JDK 17+
- CMake 3.10+
- Platform compiler (MSVC on Windows, Clang / Xcode on macOS, GCC on Linux)

To build a specific native target:

```bash
./gradlew :natives:compileNatives -PnativeTarget=<target-identifier>
```

Example for 64-bit Windows:
```bash
gradlew.bat :natives:compileNatives -PnativeTarget=win-x86-64
```

Example for 64-bit Linux:
```bash
./gradlew :natives:compileNatives -PnativeTarget=linux-x86-64
```
