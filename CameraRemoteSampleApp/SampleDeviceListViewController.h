/**
 * @file  SampleDeviceListViewController.h
 * @brief CameraRemoteSampleApp
 *
 * Copyright 2014 Sony Corporation
 */

@protocol SampleViewDelegate

- (void)didReceiveDeviceList:(BOOL)isReceived;

@end

@interface SampleDeviceListViewController
    : UIViewController <UITableViewDelegate, UITableViewDataSource,
                        SampleViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *wifiOutlet;
@property (weak, nonatomic) IBOutlet UIButton *discoveryOutlet;
- (IBAction)discoveryButton:(id)sender;
@property (weak, nonatomic) IBOutlet UITableView *deviceListOutlet;

@end
