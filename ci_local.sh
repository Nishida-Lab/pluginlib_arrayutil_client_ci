#!/bin/sh
rosrun industrial_ci run_ci ROS_DISTRO=indigo ROS_REPO=ros-shadow-fixed UPSTREAM_WORKSPACE=file ROSINSTALL_FILENAME=.depend.rosinstall

rosrun industrial_ci run_ci ROS_DISTRO=jade ROS_REPO=ros-shadow-fixed UPSTREAM_WORKSPACE=file ROSINSTALL_FILENAME=.depend.rosinstall

rosrun industrial_ci run_ci ROS_DISTRO=kinetic ROS_REPO=ros-shadow-fixed UPSTREAM_WORKSPACE=file ROSINSTALL_FILENAME=.depend.rosinstall
