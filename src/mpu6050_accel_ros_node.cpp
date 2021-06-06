#include <ros/ros.h>

int main(int argc, char** argv) {
	ros::init(argc, argv, "mpu6050_accel_ros_node");
	ros::NodeHandle mpu6050;
	ROS_INFO("Preparing to read IMU Data");
	ros::spinOnce();
	return 0;
}
