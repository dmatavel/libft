
# libft

## Name

libft - a personal C library.

## Description

**libft** remakes and extends libc ([C Standard Library](https://en.wikipedia.org/wiki/C_standard_library)). It includes standard libc remakes and also nonstandard libc remakes such as [libbsd](https://helpmanual.io/man7/libbsd/) functions and personal/mandatory extensions made at 42 cursus.

## Headers

The following are the headers provided by **libft** in its latest stable version:

*Standard libc remakes*

libft_ctype.h
libft_string.h\
libft_strings.h\
libft_stdlib.h\
libft_stdio.h\
libft_limits.h

*Nonstandard libc remakes*

libft_bsd.h

*Libft extensions*

libft_str.h
libft_extends.h\
libft_tools.h\
t_list.h\
libft_macros.h\
get_next_line.h

## **Download**

You can download the source code [here](https://github.com/dmatavel/libft/archive/refs/heads/main.zip) or click the "Code" button at the upper-right corner of this repository, selecting "Download Zip".

Alternatively, you can clone this repository in your machine. Simple execute in your terminal:

    cd ~/Downloads/ && git clone https://github.com/dmatavel/libft.git

It assumes that you have [Git](https://git-scm.com/) installed and a **Downloads** folder in your **Home** directory. If you face any error, check this requirements.

## Compilation

1. Skip this step if you have **[gcc](https://gcc.gnu.org/)** installed.

Assuming that you are using Ubuntu 22.04 or 20.04, update your system executing in your terminal:

    sudo apt update

followed by

    sudo apt upgrade

Install **gcc** with:

    sudo apt install build-essential

2. If you downloaded the zip file, extract it and enter the **libft-main** folder. With a right click on your file browser, select the option **Open in Terminal** or something like that.

If you've cloned the repository, simple go inside the program's directory. Execute in your terminal:

	make libft.a

A static library named **libft.a** will be created.

## Bugs and contribution

Report bugs sending an email for matavelidanilo@gmail.com or opening an issue on the project's GitHub repository. Pull requests with fixes, features or any other upgrades are highly welcome.  

## Supported OSs

libft was developed and tested in Ubuntu 22.04 LTS and MacOS 10.15 Catalina. 

## 42 cursus students

libft was first developed as a 42 cursus project. If you are a student at 42, please be aware that this project may have been modified in relation to the project that was submitted for evaluation during the course. You can take it as a reference for your studies, but not as a parameter for correcting your project.

## License

This is a free work delivered for educational purposes during the main course
at 42 <42.rio>.

Feel free to use it, change it, give advices, send me a pull request or
just mail me if you want to share some thoughts.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
