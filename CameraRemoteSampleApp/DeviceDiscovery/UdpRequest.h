/**
 * @file  UdpRequest.h
 * @brief CameraRemoteSampleApp
 *
 * Copyright 2014 Sony Corporation
 */

#import <CoreFoundation/CoreFoundation.h>
#import <sys/socket.h>
#import <netinet/in.h>
#import <ifaddrs.h>
#import <sys/ioctl.h>
#import <net/if.h>
#import <sys/socket.h>
#import <arpa/inet.h>
#include <netdb.h>
#import "SampleDeviceDiscovery.h"

@interface UdpRequest : NSObject

- (void)search:(id<SampleDiscoveryDelegate>)delegate;

@end
