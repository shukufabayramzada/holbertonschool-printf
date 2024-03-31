
![Logo](https://th.bing.com/th/id/R.e6315794f2dc2173ec197613148adf7a?rik=SKLQDysNVXBrog&riu=http%3a%2f%2fwww.automationminds.com%2fwp-content%2fuploads%2f2016%2f03%2fC-SLIDER.jpg&ehk=ZZ6lL7mtsfdZ%2bxUWfEkzGxayTv6UJpydsa7CQmJRxyA%3d&risl=&pid=ImgRaw&r=0)


## 🛠 Skills
C

# _printf Function

## Description

The `_printf` function produces output according to a given format. It is a custom implementation of the `printf` function in C. This function accepts a format string containing zero or more directives and writes output to the standard output stream (`stdout`). The format string may contain conversion specifiers such as `%c`, `%s`, and `%%`, which are replaced by the corresponding arguments passed to the function.

## Prototype

```c
int _printf(const char *format, ...);
```

## Return Value

The function returns the number of characters printed, excluding the null byte used to end output to strings.

## Conversion Specifiers

The `_printf` function handles the following conversion specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a literal `%` character.
- `%d` and `%i`: Print signed decimal integers.

The function does not handle flag characters, field width, precision, or length modifiers.

Compilation
Your code will be compiled this way:

1. **Compile Command**: Use the given compilation command:
   ```bash
   $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
   ```

2. **Header Inclusion**: Ensure that your main files include the main header file `main.h`:
   ```c
   #include "main.h"
   ```

3. **Avoid Main Functions in Root Directory**: Do not include any `main` functions in the root directory of your project. If you need to include `main` functions for testing purposes, place them in a separate folder, such as a `test` folder, and ensure they are not included in the compilation command provided.

Following these guidelines will help ensure that your code compiles successfully and meets the project's requirements.

## Repository Information

- GitHub Repository: [holbertonschool-printf](https://github.com/shukufabayramzada/holbertonschool-printf)

---

# man_3_printf

## Description

The `man_3_printf` manual page provides documentation for the `_printf` function. It includes information about the function's usage, prototype, return value, and supported conversion specifiers.

## Flowchart 

![flowchart](https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Copy%20of%20printf%20flowchart.drawio.png#R5V1bd5s4EP4t%2B%2BCzyUN8EEJcHuMk7XY3222TXrZPPRhkmxYbL8aJ3V%2B%2F4iIDkmzLMWBM8uAYIUBo5vtmNDPgHryZrt6G9nzyd%2BBiv6cq7qoHb3uqapoK%2BYwb1mmDaip62jIOPTdtA3nDo%2FcLZ43ZgeOl5%2BJFqWMUBH7kzcuNTjCbYScqtdlhGDyXu40Cv3zVuT3GXMOjY%2Ft861fPjSbZfalG3v4H9sYTemWgW%2BmeqU07Z3eymNhu8Fxognc9eBMGQZR%2Bm65usB9PHp2Xr%2B%2FWX%2F37n%2FrbPz8u%2FrM%2FD%2F769P7LVXqyN4ccsrmFEM%2BiF596YBgfTf8Neogefjz9Ap%2Fxl2%2FoSk1P%2FWT7y2y%2BsnuN1nQCsUvmM9sMwmgSjIOZ7d%2FlrYMwWM5cHF9GIVt5n%2FsgmJNGQBp%2F4ChaZ8phL6OANE2iqZ%2Ftlby%2FbB4WwTJ08I6byuQV2eEYRzv6ZeeLb7CgK9nsvcXBFEfhmnQIsW9H3lNZoexML8ebfvncky%2FZ9B8gCkUgCt0n4x8MyZdx%2FOXx0%2FXDJ9pKLrLZwQvN9wnAYuE8T7wIP87tZMaeCcbLUz%2FyfP8m8IMwOQ6OTAc7DmlfRGHwExf2DE2kIeVgYT3hMMKrndOb7TWMbAYyprkCqpK1POfABShrmxRAayk1ycTsIjwoC%2B%2BDh9EqeABOFB6ZDXJQT72J%2FyUbDpnqiALE9Z4oPp7s7763iC7ILS8uCwAqdOEES%2Bh%2BHn8l8277PvaDcWhPScc5Dj1ySzhk933Id%2BxH3QpTWylC4chxLEuEQqhDC7p1ohAiBoWKAIUbm1hEoV4XCoGIGs8ehoYkDK1WwdDgRPFu5kWe7cezRmHoxVeeuTkgicvX27B5QWqHGSfHwWg0OhEsGONkqohHBRSgwqwNFZ303SxZ361dzpu1GxbRBCd7Q88e%2BjhZ2YyXU5xAIzZMyThHOMQuxcpwnfYiA70WG7QFmaPUoqUWcBSEZMlymYhEysCdDfigwoFPYJJE4DNqA5%2FWRfABWdcQwFahD7ZDGkQI4frf%2BPg%2BopvfstMlG7er0tY62zqVFFWzailmh34IUj%2BAoltlAawDBpjpWLPjcm24DkN7Xeg2jzssdlwJmIi9EmLUKz1nrmyb%2BzyCDfjFCeXgUZCML1dE%2Fb9lQHdcLRJVIgSvADRfpdSd7ae0ndI66fFbcrjy%2FvP9fYHg0%2FNvYfhwEkyHy8XhUYAR1sVRANewhkqdUQAIWFXRBVwPmgwCqCLpnj%2FXQ1muR63ieqPT0qidiqFu9a3CH0OXSOkrhT8VStF0ZTwKa%2BdRNPB66Dan09976IZ8dJhQFYsRMZAkVKDU5j13M66KZBm1XZFVqL9qacB22Tc67iY4MD5JxoIq6jIJqpZRJkEIRREErUmvspNBbSAb1QbtCmsDPq5dB%2BpioQ%2Fivhz%2Buu6FsMs6YJ3cC1FF3ub5I1A2gk7vtiUI1LrJh7LSgC3jQz6hURsf8mTYbWeE58LTU6HI6Tx78NGb2E%2BFWqvAZ7QjnXEqaWh6q6RBx10HFTrT%2BffRcuZcbPERL3uvJe6vMokbIAr76yJSZFNJ1QletCY4fxhqsqTYMhiKSLEqGGZVSjHwErBd7AXmJVdLuBORm2LCMHDwQgKZQ9v5OU50559l5HszLEasbbgjqIgQW3tVhorKiIWCooxNWyMVUUY7Apl45UWFKgCy9a2wJ68BiDdoCUBeOtArFg7kdQTNlA5QzO8lB8rEdeerLMZXNiGjPBUVDmigrMy6wTxMwY4LKUf111Cpfz1lCaoIDxVRppdw4aBXqjZ7bRQIodov640mcFuAjngSRHWRoC5auZ%2BABPNaKBOCIqldKX1F3UNryVahnv4FXNcaCgPAAn0d5Cl3JhUBFKNvMmdNiZpjNf7cimX0da2sgsn58hw%2Bc%2BrKKq0stXRZoKu7h6pC47gDoLnnAMVUjjtAU8yjDqiJxkXZ8gNp3NhC4w84Woaz2OO9AtLO7NkUDnPykk871Jb3g52sfYDS2faW1T7wgc%2Fv82XkTOzwopQtvzxfFOhsvBkC%2FtkV0OgTXXpLVmrUSSk5KFWvutrjiRxX%2FCftlGhbFjuV%2ByCQfWSYRhG3Do09opF1GOQDiVnEKVlCvYKFkmG1joK0Tmb%2FaRp5f5JFbZcd5letGzuc5IPP2f5qTGpDECJoVvU7me2lGr1f9duV7aXjfr3WwWT8BSDIJDTsn3Yy9UcV%2FwQO6XEI4VN%2F3utBh8XEMFRBCKNh%2B9GOEHPV6JDNfWmVPzZ7nDT4tXR3XCfWMpinXjagTtZmUZXeq%2FuoXQ%2F%2Ba3wwVRS%2B25SZnjMUmFUE1ARmQPQOjPqgwDuuPBRm7nX8EkeyNQti41qc3DIKXlI2UTEMpLW7MOei99HRtmOLHxj2Q2z9r2xEzmTCL7Cm1y8YTKRZh7urIthxMf3ricYhPvDD1X%2FxitxBx5I1rpp5ascSyQQmckZxfHux8JydpEIj%2FHHVAWDC%2FBC2oAxBOhrRDOfspQpZzrE0RrtYran5XQJIJsV0uHUCBduUW6pGrJP0Y%2BMNWSf2pT7qSzWFTQ4ArR7zZOpbLlSvvZFZLb%2Bc1BRYJjVE1oOnZzXpV0s1pKt7VUxWWQ22okRSV6vSJl3G6T679ScF5v7IZLte%2B0jHXZDGjY%2FtuKBqOe%2Bpuj2NvcLZcDHv5YWy5dc4EuhnjxJIv7ixLL2zWcGygUzt9GH%2BTgZzdFmS1tsVzKHjLkgjL09MlmiXIjTs0f%2BydNqLBiSqHG8WDdvfvrX5oYG797fV%2Fv7ATvGMbNdykUg8NtYAVOsUj848ECJaHIs8lvqebuqk5a%2B%2BHnSLB8gWQW4eOD24vG1r1dnL1yvyXiLZzH9xJu2e%2F24PvPsf#%7B%22pageId%22%3A%22z-fOWi0nxzDHl8y47WNj%22%7D)
## File Location

The `man_3_printf` file is located in the GitHub repository [holbertonschool-printf](https://github.com/holbertonschool/printf).

## Usage

To access the manual page for `_printf`, use the `man` command followed by the section number. For example:

```bash
man 3 _printf
```

This README provides an overview of the `_printf` function and the associated `man_3_printf` manual page. For further details, consult the documentation in the specified GitHub repository.
## Authors

- [@shukufabayramzada](https://github.com/shukufabayramzada)
- [@sayka88](https://github.com/sayka88)


