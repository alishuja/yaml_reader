#include "ros/ros.h"

int main(int argc, char ** argv){
	ros::init(argc, argv, "config_reader");
	ros::NodeHandle n;
	if (n.hasParam("config_reader/configurations")){
		ROS_INFO("configurations found.");
	}
	else{
		ROS_INFO("configurations not found.");
	}
	return 0;
}
