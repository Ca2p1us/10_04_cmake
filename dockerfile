FROM opencvcourses/opencv-docker:4.5.1

RUN apt -y update \
    && apt -y install git gcc gdb cppcheck cmake make pkg-config

WORKDIR /mnt
