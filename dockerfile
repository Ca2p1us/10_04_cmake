FROM opencvcourses/opencv-docker:4.5.1

RUN apt -y update \
 && apt -y install gcc gdb cppcheck cmake

WORKDIR /mnt
