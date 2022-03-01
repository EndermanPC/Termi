# Termi
(Termi currently is just a terminal app but we are developing it to be a fully working terminal not just an app)

A Powerful Terminal made in C++ and C#

## About Termi
- Termi is a powerful terminal made in C++ and C#
- It can run on Windows, macOS and GNU/Linux.
- The goal of Termi is create independent terminal.
- `Independent` mean to be independent from terminal in operating system i.e. a separate kind of terminal use "own" GUI renedering.
- We accept contibutors, create a **Pull Request** to contribute and check [our coding style](https://github.com/ringwormGO-organization/Termi/blob/main/CONTRIBUTING.md)
- And plese read [organize part](https://github.com/ringwormGO-organization/Termi/blob/main/CONTRIBUTING.md#code-organization) which talk about directory organization.

## Checklist
### Termi base C++ part
- [x] Windows version
- [x] Linux version
- [x] macOS version (same folder/directory as GNU/Linux version)

### Termi C++ part
- [ ] User Settings in JSON
- [ ] Support all major commands
- [ ] Include other host terminals

### Windows - installer and launcher
- [x] Setup in [Inno Setup](https://github.com/jrsoftware/issrc)
- [x] Lanucher and updater - C#

### Independence
- [ ] Independence ([ImGUI](https://github.com/ocornut/imgui))

## Build & Run
### Required software:

- Visual Studio 2019 with `.NET desktop development` and `Desktop development with C++` components - Windows.
- G++ complier - Linux version
  - Install with ```sudo apt install g++``` if not already installed.

### Build & Run - Windows
- Open `Developer Command Prompt for VS 2019` or `Developer Command Prompt for VS 2022` and run `compile.bat`.
- Open Termi Visual Studio Solution and compile it.
- If you want run Termi as standard user, install [.NET SDK 5.0](https://dotnet.microsoft.com/en-us/download/dotnet/5.0) or above and run[Termi Installer](https://github.com/ringwormGO-organization/Termi/blob/main/Termi-Windows/Installer/Termi.exe). When you launching installed app, run application as **ADMINISTRATOR**

### Build & Run - Linux version (& MacOS version which unsupported)
Run `.build.sh`:

```sh
$ chmod +x ./build.sh && ./build.sh
```

## Credits
- [Background launcher picture](https://pixabay.com/photos/leaf-maple-autumn-foliage-botany-3865014/)
____________________________________

Thank you for choosing Termi.

© 2022 ringwormGO
