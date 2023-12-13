<!-- ABOUT THE PROJECT -->
## About The Project

The project covers Dynamic/Shared Linking of C files during processing.


<p align="right">(<a href="#readme-top">back to top</a>)</p>



### Usage
The shared linking file/library is used in preprocessor include directives as follows;

```
#include "shared_linking.h"
```
<!-- GETTING STARTED -->
## Creating a Dynamic Library file

The following steps are followed in creation of a Dynamically linked file;

1. Create a folder of all C files you intend to include in the library.
2. Include all the function prototypes in a header file(**_header_file.h_**).
3. Create object files from the C files using the following command;

```
gcc *.c -c -fPIC
```
<!-- *.c selects all c files, -c flag creates object files without linking them, and -fPIC specifies an independent position for where the files will be loaded in memory-->        

4. Create the Library file using the command below;

    ```
    gcc *.o -shared -o name_of_library.so
    ```
    <!-- *.o selects all object files, -shared flag determines that a dynamic library is to be created-->
<!-- CONTACT -->
## Contact

Author - [EWanjau](https://github.com/EWanjau) - wamwanjau@gmail.com

Project Link: [Dynamic-libraries](https://github.com/EWanjau/alx-low_level_programming/tree/main/0x18-dynamic_libraries)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

[ALX-Africa](https://www.alxafrica.com/)



<p align="right">(<a href="#readme-top">back to top</a>)</p>